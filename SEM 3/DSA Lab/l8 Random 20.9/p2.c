#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prv;
};
void insert(struct node **h, int val, int pos)
{
    struct node *cur, *ptr;
    cur = malloc(sizeof(struct node));
    cur->next = NULL;
    cur->prv = NULL;
    cur->data = val;
    if (*h == NULL)
    {
        *h = cur;
    }
    else if (pos == 0)
    {
        cur->next = *h;
        (*h)->prv = cur;
        *h = cur;
    }
    else
    {
        ptr = *h;
        int i = 0;
        while (i < pos - 1 && (ptr->next != NULL))
        {
            ptr = ptr->next;
            i++;
        }
        if (ptr->next == NULL)
        {
            cur->prv = ptr;
            ptr->next = cur;
        }
        else
        {
            cur->prv = ptr;
            cur->next = ptr->next;
            ptr->next = cur;
            cur->next->prv = cur;
        }
    }
}
void display(struct node *h)
{
    if (h == NULL)
        printf("Empty List");
    for (; h != NULL; h = h->next)
    {
        printf("%d\t", h->data);
    }
    printf("\n");
}
int main()
{
    int n, v, i, c;
    struct node *head = NULL;
    printf("Enter no. of nodes: ");
    scanf("%d", &n);
    printf("Enter data: ");
    for (i = 0; i < n; i++)
    {
        int v;
        scanf("%d", &v);
        insert(&head, v, i);
    }
    //create head, insert elements into it.
    struct node *mptr = head, *ptr1;
    while (mptr->next != NULL)
    {
        ptr1 = mptr->next;
        c = 0;
        while (ptr1 != NULL)
        {
            c++;
            if (mptr->data == ptr1->data) //condition for intersection
            {
                printf("Circular structure found\n");
                printf("No of nodes in circular link= %d\n", c);
                return 0;
            }
            ptr1 = ptr1->next;
        }
        mptr = mptr->next;
    }
    printf("No circular str found");
}