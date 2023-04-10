#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct node
{
    int data;
    struct node *next;
};

void insert(struct node **h, int d1933, int pos1933)//insert function
{
    struct node *cur, *ptr;
    cur = malloc(sizeof(struct node));
    cur->data = d1933;
    cur->next = NULL;
    if (*h == NULL)
    {
        *h = cur;
    }
    else if (pos1933 == 0)
    {
        cur->next = *h;
        *h = cur;
    }
    else
    {
        ptr = *h;
        int i = 0;
        while (i < pos1933 - 1)
        {
            ptr = ptr->next;
            i++;
        }
        cur->next = ptr->next;
        ptr->next = cur;
    }
}
int pal(struct node **h, int n)
{
    struct node *ptr1, *ptr2;
    /* LOGIC: traversing to (i)th node 
    traversing to (n-i-1) th node
    comparing the data in both
    if it is not equal immediately return 0 */
    for (int k = 0; k < n / 2; k++)//running for the first half of the loop
    {
        ptr1 = *h;
        int i = 0;
        while (i < k && ptr1->next != NULL)
        {
            ptr1 = ptr1->next;
            i++;
        }
        ptr2 = *h;
        i = 0;
        while (i < n - k - 1 && ptr2->next != NULL)
        {
            ptr2 = ptr2->next;
            i++;
        }
        if (ptr1->data != ptr2->data)
        {
            printf("NOT Palindrome List\n\n");
            return 0;
        }
    }
    return 1;
}
void display(struct node *h)//SLL display
{
    for (; h != NULL; h = h->next)
    {
        printf("%d\t", h->data);
    }
    printf("\n");
}

int main()
{
    int n1933;
    struct node *head = NULL;
    //scanf("%d",n1933);
    srand(time(0)); //randomising values every time we run the program
    n1933=rand()%10;//randomising no of elements
    printf("No of elements: %d\n\n", n1933);
    if(n1933==0)
    {
        printf("0 elements, please re-run.");
        return 0;
    }
    for (int i = 0; i < n1933; i++)//insering random nos
    {
        //int v;
        //printf("Enter data %d: ", i);
        //scanf("%d", &v);
        //insert(&head, v, i);
        insert(&head, rand()%100, i);
    }
    display(head);
    if (pal(&head, n1933))
    {
        printf("Palindrome List\n");
    }
    //executing the fn for a palindrome list
    struct node *head1 = NULL;
    for (int i = 0; i < n1933; i++)//inserting nos in palindrome manner
    {
        if(i<n1933/2)
            insert(&head1,i , i);
        else
            insert(&head1, n1933-i-1, i);
    }
    display(head1);
    if (pal(&head1, n1933))
    {
        printf("Palindrome List\n");
    }
}
