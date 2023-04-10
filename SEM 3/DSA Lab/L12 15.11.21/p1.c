#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left, *right;
};
struct node *root = NULL;
struct node *cn(int n)
{
    struct node *cur;
    cur = malloc(sizeof(struct node));
    cur->data = n;
    cur->left = cur->right = NULL;
    return cur;
}
void inorder(struct node *r)
{
    if (r != NULL)
    {
        inorder(r->left);
        printf("%d ", r->data);
        inorder(r->right);
    }
}
int leaf(struct node *r)
{
    if (r == NULL)
        return 0;
    if (r->left == NULL && r->right == NULL)
        return 1;
    else
        return (leaf(r->left) +leaf(r->right));
}
int nnodes(struct node *r)
{
    if(r==NULL)
        return 0;
    else
        return (1+ nnodes(r->left) + nnodes(r->right));
}

int sum(struct node *r)
{
    if(r==NULL)
        return 0;
    else return(r->data + sum(r->left)+sum(r->right));
}
void create()
{
    root = cn(20);
    root->left = cn(15);
    root->right = cn(25);
    (root->left)->left = cn(10);
    (root->left)->right = cn(18);
    (root->right)->left = cn(22);
    (root->right)->right = cn(28);
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}
int height(struct node*r)
{
    if(r==NULL)
        return -1;
    return(max(height(r->right), height(r->left))+1);
}
void displayleaf(struct node *r)
{
    if (r != NULL)
    {
        if (r->left == NULL)
            if (r->right == NULL)
                printf("\n%d ", r->data);
        if (r->left)
            displayleaf(r->left);
        if (r->right)
            displayleaf(r->right);
    }
}
void lvldisplay(struct node *r, int l, int h)
{
    if(r==NULL)
        return;
    else if(l==h)
        printf("%d, ", r->data);
    else
    {
        lvldisplay(r->left, l + 1, h);
        lvldisplay(r->right,l+1,h );
    }
}
int isBST(struct node *r)
{
    if (r == NULL)
        return 1;
    if (r->left != NULL && r->left->data > r->data)
        return 0;
    if (r->right != NULL && r->right->data < r->data)
        return 0;
    if (!isBST(r->left) || !isBST(r->right))
        return 0;
    return 1;
}
int main()
{
    create();
    printf("%d is the no of leaf nodes\n", leaf(root));
    printf("%d is the no of non leaf nodes\n", nnodes(root)-leaf(root));
    printf("%d is the no of total nodes\n", nnodes(root));
    printf("%d is the sum of nodes\n", sum(root));
    int h= height(root);
    printf("%d is the height(depth)\n", h);
    printf("Nodes at max depth: ");
    lvldisplay(root, 0, h);
    printf("\n");
    for(int i= 0; i<=h; i++)
    {
        printf("Nodes at level %d: ", i);
        lvldisplay(root, 0, i);
        printf("\n");
    }
    if(isBST(root))
        printf("The Tree is a BST\n");
    else
        printf("The tree is not a BST\n");
    inorder(root);
    printf(" is the InOrder\n");
}
//void smax(struct node *r, int *n)
// {
//     if (r != NULL)
//     {
//         if (r->data > *n)
//             *n = r->data;
//         smax(r->left, n);
//         smax(r->right, n);
//     }
// }
// void smin(struct node *r, int *n)
// {
//     if (r != NULL)
//     {
//         if (r->data < *n)
//             *n = r->data;
//         smin(r->left, n);
//         smin(r->right, n);
//     }
// }
// int main()
// {
//     int c, s, max = -99999, min = 9999999;
//     create();
//     while (1)
//     {
//         printf("Enter Choice:  0.Quit  1.NLeaf  2.N.~leaf 3.Inorder ");
//         scanf("%d", &c);
//         switch (c)
//         {
//         case 0:
//             printf("Thanks");
//             return 0;
//         case 1:
//             printf("%d is the no of leaf nodes\n", leaf(root));
//             break;
//         case 2:
//             printf("%d is the no of total nodes\n", nnodes(root));
//             break;
//         case 3:
//             inorder(root);
//             printf(" is the InOrder\n");
//             break;
//         case 9:
//             preorder(root);
//             printf(" is the PreOrder\n");
//             break;
//         case 4:
//             postorder(root);
//             printf(" is the PostOrder\n");
//             break;
//         case 5:
//             printf("Enter No to search: ");
//             scanf("%d", &s);
//             int k = search(root, s);
//             if (k == 1)
//                 printf("Found\n");
//             else
//                 printf("Not Found\n");
//             break;
//         case 6:
//             smax(root, &max);
//             printf("Max element= %d\n", max);
//             break;
//         case 7:
//             smin(root, &min);
//             printf("Min element= %d\n", min);
//             break;
//         case 8:
//             displayleaf(root);
//             break;
//         }
//     }
// }