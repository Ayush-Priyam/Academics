#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX_TREE_HT 100

int comp[100], x = 0, freqsum = 0;

struct MinHeapNode
{
    char data;
    unsigned freq;
    struct MinHeapNode *left, *right;
};

struct MinHeap
{
    unsigned size;
    unsigned capacity;
    struct MinHeapNode **array;
};

struct MinHeapNode *newNode(char data, unsigned freq)
{
    struct MinHeapNode *temp = (struct MinHeapNode *)malloc(sizeof(struct MinHeapNode));
    temp->left = temp->right = NULL;
    temp->data = data;
    temp->freq = freq;
    return temp;
}

struct MinHeap *createMinHeap(unsigned capacity)
{
    struct MinHeap *minHeap = (struct MinHeap *)malloc(sizeof(struct MinHeap));
    minHeap->size = 0;
    minHeap->capacity = capacity;
    minHeap->array = (struct MinHeapNode **)malloc(minHeap->capacity * sizeof(struct MinHeapNode *));
    return minHeap;
}

void swapMinHeapNode(struct MinHeapNode **a, struct MinHeapNode **b)
{
    struct MinHeapNode *t = *a;
    *a = *b;
    *b = t;
}

void minHeapify(struct MinHeap *minHeap, int idx)
{
    int smallest = idx;
    int left = 2 * idx + 1;
    int right = 2 * idx + 2;

    if (left < minHeap->size && minHeap->array[left]->freq < minHeap->array[smallest]->freq)
        smallest = left;

    if (right < minHeap->size && minHeap->array[right]->freq < minHeap->array[smallest]->freq)
        smallest = right;

    if (smallest != idx)
    {
        swapMinHeapNode(&minHeap->array[smallest],
                        &minHeap->array[idx]);
        minHeapify(minHeap, smallest);
    }
}

int isSizeOne(struct MinHeap *minHeap)
{
    return (minHeap->size == 1);
}
struct MinHeapNode *extractMin(struct MinHeap *minHeap)
{
    struct MinHeapNode *temp = minHeap->array[0];
    minHeap->array[0] = minHeap->array[minHeap->size - 1];
    --minHeap->size;
    minHeapify(minHeap, 0);

    return temp;
}

void insertMinHeap(struct MinHeap *minHeap, struct MinHeapNode *minHeapNode)
{
    ++minHeap->size;
    int i = minHeap->size - 1;
    while (i && minHeapNode->freq < minHeap->array[(i - 1) / 2]->freq)
    {

        minHeap->array[i] = minHeap->array[(i - 1) / 2];
        i = (i - 1) / 2;
    }
    minHeap->array[i] = minHeapNode;
}

void buildMinHeap(struct MinHeap *minHeap)
{
    int n = minHeap->size - 1;
    int i;
    for (i = (n - 1) / 2; i >= 0; --i)
        minHeapify(minHeap, i);
}

void printArr(int arr[], int n)
{
    int i;
    for (i = 0; i < n; ++i)
        printf("%d", arr[i]);
    printf("\n");
}

int isLeaf(struct MinHeapNode *root)
{
    return !(root->left) && !(root->right);
}
struct MinHeap *createAndBuildMinHeap(char data[], int freq[], int size)
{
    struct MinHeap *minHeap = createMinHeap(size);
    for (int i = 0; i < size; ++i)
        minHeap->array[i] = newNode(data[i], freq[i]);
    minHeap->size = size;
    buildMinHeap(minHeap);
    return minHeap;
}

// The main function that builds Huffman tree
struct MinHeapNode *buildHuffmanTree(char data[], int freq[], int size)
{
    struct MinHeapNode *left, *right, *top;
    struct MinHeap *minHeap = createAndBuildMinHeap(data, freq, size);
    while (!isSizeOne(minHeap))
    {
        left = extractMin(minHeap);
        right = extractMin(minHeap);
        top = newNode('$', left->freq + right->freq);
        top->left = left;
        top->right = right;

        insertMinHeap(minHeap, top);
    }
    return extractMin(minHeap);
}
void printCodes(struct MinHeapNode *root, int arr[], int top)
{

    if (root->left)
    {
        arr[top] = 0;
        printCodes(root->left, arr, top + 1);
    }
    if (root->right)
    {
        arr[top] = 1;
        printCodes(root->right, arr, top + 1);
    }

    if (isLeaf(root))
    {

        printf("%c: ", root->data);
        printArr(arr, top);
        // for ch 5
        comp[x++] = root->freq;
        comp[x++] = top;
    }
}

void printPreorder(struct MinHeapNode *node)
{
    if (node == NULL)
        return;
    if (isLeaf(node))
        printf("%c -> ", node->data);
    printPreorder(node->left);
    printPreorder(node->right);
}

void HuffmanCodes(char data[], int freq[], int size)
{
    struct MinHeapNode *root = buildHuffmanTree(data, freq, size);
    int arr[MAX_TREE_HT], top = 0;
    printCodes(root, arr, top);
}

int main()
{
    int ch = -1;
    int n;
    printf("enter value of n: ");
    scanf("%d", &n);
    int freq[n];
    char arr[n];
    struct MinHeapNode *rootch3;
    while (ch != 0)
    {
        printf("\n0.Quit\n1.Input n unique characters with their frequencies into an array\n2.Display the array\n3.Generate Huffman Tree and Traverse the tree with pre order\n4.Generate Huffman Codes for n characters and display the same.\n5.Compare Huffman code with Fixed-Length Code\n");
        printf("Enter choice : ");
        scanf("%d", &ch);
        if (ch == 1)
        {

            printf("enter %d unique characters and their frequencies : \n", n);
            printf("enter the character array : ");
            scanf("%s", &arr);
            for (int i = 0; i < n; i++)
            {
                printf("freq of %d:", i + 1);
                scanf("%d", &freq[i]);
                freqsum += freq[i];
            }
        }

        if (ch == 2)
        {
            for (int i = 0; i < n; i++)
                printf("char-%c freq-%d\n", arr[i], freq[i]);
        }

        if (ch == 3)
        {
            int size = sizeof(arr) / sizeof(arr[0]);
            rootch3 = buildHuffmanTree(arr, freq, size);
            printPreorder(rootch3);
        }
        if (ch == 4)
        {
            int arrch4[MAX_TREE_HT], topch4 = 0;
            printCodes(rootch3, arrch4, topch4);
        }
        if (ch == 5)
        {
            int temp = (int)(log(n) / log(2) + 0.5);
            printf("for n characters in fixed length encoding, %d bits are required\ntherefore total bits in fixed lenght encoding = %d * %d  = %d\n", temp, temp, freqsum, temp * freqsum);
            printf("using variable lenght encoding bits requred is sum of :\n");
            x = 0;
            int sum = 0;

            while (comp[x])
            {
                printf("%d*%d = %d\n", comp[x], comp[x + 1], comp[x] * comp[x + 1]);
                sum += comp[x] * comp[x + 1];
                x += 2;
            }
            printf("\n = %d", sum);
            printf("\nwhich is only %.2f %% of fixed length encoding", ((sum * 1.0) / (temp * freqsum)) * 100);
        }
    }
}