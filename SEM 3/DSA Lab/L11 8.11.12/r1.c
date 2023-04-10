#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *r, *l;
};
struct node *root = NULL;

struct node *create(int val)
{
    struct node *cur = (struct node*)malloc(sizeof(struct node));
    cur->data = val;
    cur->l = cur->r = NULL;
    return cur;
}

void inOrder(struct node *rt)
{
    if (rt != NULL)
    {
        inOrder(rt->l);
        printf("%d ", rt->data);
        inOrder(rt->r);
    }
}

void preOrder(struct node *rt)
{
    if (rt != NULL)
    {
        printf("%d ", rt->data);
        preOrder(rt->l);
        preOrder(rt->r);
    }
}

void postOrder(struct node *rt)
{
    if (rt != NULL)
    {
        postOrder(rt->l);
        postOrder(rt->r);
        printf("%d ", rt->data);
    }
}

struct node *modify(struct node *rt, int val)
{
    if (rt == NULL)
        return create(val);
    if (val < rt->data)
        rt->l = modify(rt->l, val);
    else
        rt->r = modify(rt->r, val);

    return rt;
}

int smallVal(struct node *rt)
{
    while (rt->l != NULL)
    {
        rt = rt->l;
    }
    return rt->data;
}

int largVal(struct node *rt)
{

    while (rt->r != NULL)
    {
        rt = rt->r;
    }
    return rt->data;
}

struct node *search(struct node *node, int val)
{
    if (node == NULL)
    {
        printf("\n Element not found ");
    }
    else if (node->data < val)
    {
        node->r = search(node->r, val);
    }
    else if (node->data > val)
    {
        node->l = search(node->l, val);
    }
    else
        printf("\n %d is found ", node->data);
    return node;
}
struct node *findMin(struct node *node)
{
    if (node == NULL)
    {
        return NULL;
    }
    if (node->l)
        return findMin(node->l);
    else
        return node;
}

struct node *delete (struct node *node, int data)
{
    struct node *tmp;
    if (node == NULL)
    {
        printf("\n Element not found ");
    }
    else if (data < node->data)
    {
        node->l = delete (node->l, data);
    }
    else if (data > node->data)
    {
        node->r = delete (node->r, data);
    }
    else
    {
        if (node->r && node->l)
        {
            tmp = findMin(node->r);
            node->data = tmp->data;
            node->r = delete (node->r, tmp->data);
        }
        else
        {
            tmp = node;
            if (node->l == NULL)
                node = node->r;
            else if (node->r == NULL)
                node = node->l;
            free(tmp);
        }
    }
    return node;
}



int main()
{
    int data, ch, n, num;

    while (1)
    {
        printf("\n0. Quit \n");
        printf("1. Create \n2. In-Order \n");
        printf("3. Pre-Order \n4. Post-Order \n");
        printf("5. Search \n6. Smallest Element \n");
        printf("7. Largest Number \n8. Deletion of Tree \n");
        printf("Enter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            return 0;
            break;

        case 1:
            printf("\n Enter total number of nodes need to enter : ");
            scanf("%d", &n);
            for (int i = 0; i < n; i++)
            {
                scanf("%d", &num);
                root = modify(root, num);
            }
            break;

        case 2:
            printf("\n INORDER : ");
            inOrder(root);
            break;

        case 3:
            printf("\n PREORDER : ");
            preOrder(root);
            break;

        case 4:
            printf("\n POSTORDER : ");
            postOrder(root);
            break;

        case 5:
            printf("\n Enter the number to be searched : ");
            scanf("%d", &num);
            root = search(root, num);
            break;

        case 6:
            printf("\n Smallest value is %d ", smallVal(root));
            break;

        case 7:
            printf("\n Largest Value is %d ", largVal(root));
            break;

        case 8:
            printf("\n Enter the number to be deleted : ");
            scanf("%d", &num);
            root = delete (root, num);
            break;
        }
    }
}
//67 34 12 11 56 89 54 33 98 17 54 90 23 