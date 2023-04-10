#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left, *right;
};
struct node *root=NULL;
struct node* cn(int n)
{
    struct node *cur;
    cur=malloc(sizeof(struct node));
    cur->data=n;
    cur->left=cur->right=NULL;
    return cur;
}
void inorder(struct node *r)
{
    if(r!=NULL)
    {
        inorder(r->left);
        printf("%d ", r->data);
        inorder(r->right);
    }
}
void preorder(struct node *r)
{
    if (r != NULL)
    {
        printf("%d ", r->data);
        preorder(r->left); 
        preorder(r->right);
    }
}
void postorder(struct node *r)
{
    if (r != NULL)
    {
        postorder(r->left);
        postorder(r->right);
        printf("%d ", r->data);
    }
}
int search(struct node *r, int n)
{
    if(r!=NULL)
    {
        if(r->data==n)
            return 1;
        search(r->left,n);
        search(r->right, n);
    }
}
void create()
{
    root= cn(5);
    root->left=cn(2);
    root->right=cn(3);
    (root->left)->left=cn(4);
    (root->left)->right=cn(8);
    (root->right)->left=cn(6);
}
void smax(struct node *r, int *n)
{
    if (r != NULL)
    {
        if (r->data > *n)
            *n= r->data;
        smax(r->left, n);
        smax(r->right, n);
    }
}
void smin(struct node *r, int *n)
{
    if (r != NULL)
    {
        if (r->data < *n)
            *n = r->data;
        smin(r->left, n);
        smin(r->right, n);
    }
}
void display(struct node *r)
{
    if (r != NULL)
    {
        if (r->left == NULL) 
            if(r->right == NULL)
                printf("\n%d ", r->data);
        if(r->left) 
            display(r->left);
        if(r->right)
            display(r->right);
    }
}
int main()
{
    int c,s, max=-99999, min= 9999999;
    while(1)
    {
        printf("Enter Choice:  0.Quit  1.Create  2.In-Order   3.Pre-Order  4.Post-Order   5.Search:   6.MAX  7.MIN: ");
        scanf("%d", &c);
        switch(c)
        {
            case 0: printf("Thanks");
                    return 0;
            case 1: create();
                    break;
            case 2: inorder(root); printf(" is the InOrder\n"); break;
            case 3: preorder(root); printf(" is the PreOrder\n"); break;
            case 4: postorder(root); printf(" is the PostOrder\n"); break;
            case 5: printf("Enter No to search: ");
                    scanf("%d", &s);
                    int k= search(root, s);
                    if(k==1) printf("Found\n");
                    else printf("Not Found\n");
                    break;
            case 6: smax(root, &max);
                    printf("Max element= %d\n", max);
                    break;
            case 7:
                smin(root, &min);
                printf("Min element= %d\n", min);
                break;
            case 8: display(root);
                break;
        }
    }
}