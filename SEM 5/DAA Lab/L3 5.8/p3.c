/*
3. Design a data structure to maintain a set S of n distinct integers that supports
the following two operations:
a) INSERT(X, S): insert integer x into S
b) REMOVE-BOTTOM-HALF(S): remove the smallest n/2 integers from S.
c) write a program by using UDFs that give the worse-case time complexity of the
two operations INSERT(X, S) in O(1) time and REMOVE-BOTTOM-HALF(S) in O(n) time.
*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
}*h=NULL, *tail=NULL;

void insert(int d)
{
    struct node *cur;
    cur = malloc(sizeof(struct node));
    cur->data = d;
    cur->next = NULL;
    if (h == NULL)
    {
        h = cur;
        tail=cur;

    }
    else{
        tail->next=cur;
        tail=cur;
    }
}
void delete (int v)
{
    struct node *ptr, *prv;
    if (h == NULL)
    {
        printf("Empty List\n");
    }
    else
    {
        ptr = h;
        while (ptr != NULL)
        {
            if (ptr->data == v)
                break;
            else
            {
                prv = ptr;
                ptr = ptr->next;
            }
        }
        if (ptr == NULL)
        {
            printf("Data Not Found");
        }
        else if (ptr == h)
        {
            h = ptr->next;
            free(ptr);
        }
        else
        {
            prv->next = ptr->next;
            free(ptr);
        }
    }
}
void display()
{
    if(h==NULL)
        printf("Empty List\n");
    struct node *he= h;
    for (; he != NULL; he = he->next)
    {
        printf("%d\t", he->data);
    }
    printf("\n");
}
int main()
{
    int n;
    //struct node *head = NULL;
    printf("Enter no. of nodes: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int v;
        // printf("Enter data %d: ", i);
        // scanf("%d", &v);
        insert(3);
    }
    display();
    //insert(25);
    display();
    delete(3);
    display();
}
