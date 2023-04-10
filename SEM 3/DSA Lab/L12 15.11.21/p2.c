#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left, *right;
};
struct node *root = NULL;
void inorder(struct node *r)
{
    if (r != NULL)
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
struct node *search(struct node *r, int n)
{
    if (r == NULL)
        return r;
    if (r->data < n)
        search(r->right, n);
    else if (r->data > n)
        search(r->left, n);
    else
        return r;
}

struct node* insert(struct node *r, int v)
{
    if(r==NULL)
    {
        struct node *cur= malloc(sizeof(struct node));
        cur->left= cur->right=NULL;
        cur->data=v;
        return cur;
    }
    if(v>r->data)
    {
        r->right= insert(r->right, v);
    }
    else if(v<r->data)
    {
        r->left= insert(r->left, v);
    }
    else
    {
        return r;
    }
    return r;
}
struct node *smax(struct node *r)
{
    while (r->right != NULL)
    {
        r = r->right;
    }
    return r;
}
struct node *smin(struct node *r)
{
    while (r->left != NULL)
    {
        r = r->left;
    }
    return r;
}
struct node *del(struct node *r, int v)
{
    if (r == NULL)
        return r;
    if (v > r->data)
    {
        r->right = del(r->right, v);
        return r;
    }
    else if (v < r->data)
    {
        r->left = del(r->left, v);
        return r;
    }
    else
    {
        if (r->left != NULL && r->right != NULL)
        {
            struct node *cur = smax(r->left);
            //printf("%d is max\n", cur->data);
            r->data = cur->data;
            r->left = del(r->left, r->data);
            return r;
        }
        else if (r->right != NULL)
        {
            struct node *tmp = r->right;
            free(r);
            return tmp;
        }
        else if (r->left != NULL)
        {
            struct node *tmp = r->left;
            free(r);
            return tmp;
        }
        else
        {
            free(r);
            return NULL;
        }
    }
}
int main()
{
    int c, s, v;
    struct node *max, *min;
    while (1)
    {
        printf("0.Quit  1.AddNodes  2.In-Order   3.Pre-Order  4.Post-Order  5:DELETE  Enter Choice:  ");
        scanf("%d", &c);
        switch (c)
        {
        case 0:
            printf("Thanks");
            return 0;
        case 1:
            printf("Enter no of values to insert: ");
            int f;
            scanf("%d", &f);
            printf("Enter %d values to be inserted: ", f);
            for (int i = 0; i < f; i++)
            {
                int k; // 67 34 12 11 56 89 54 33 98 17 54 90 23
                scanf("%d", &k);
                root = insert(root, k);
            }
            break;
        case 2:
            inorder(root);
            printf(" is the InOrder\n");
            break;
        case 3:
            preorder(root);
            printf(" is the PreOrder\n");
            break;
        case 4:
            postorder(root);
            printf(" is the PostOrder\n");
            break;
        case 5:
            printf("Enter value to delete: ");
            scanf("%d", &v);
            struct node *cur = del(root, v);
            if (cur == NULL)
                printf("Not Found\n");
            else
                printf("Deleted data= %d\n", v);
            break;
        default:
            printf("Wrong Choice enter again.\n");
        }
    }
}
// struct node *cn(int n)
// {
//     struct node *cur;
//     cur = malloc(sizeof(struct node));
//     cur->data = n;
//     cur->left = cur->right = NULL;
//     return cur;
// }
// int search(struct node *r, int n)
// {
//     if (r != NULL)
//     {
//         if (r->data == n)
//             return 1;
//         search(r->left, n);
//         search(r->right, n);
//     }
// }
// struct node *addnode(struct node *r, int n)
// {
//     if (r == NULL)
//         return cn(n);
//     if (n < root->data)
//         r->left = addnode(r->left, n);
//     else if(n> root->data)
//         r->right = addnode(r->right, n);
//     else
//         printf("Cant insert same values twice\n");
//     return r;
// }