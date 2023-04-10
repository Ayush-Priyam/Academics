#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void insert(struct node **h, int d, int pos)
{
    struct node *cur, *ptr;
    cur = (struct node *)malloc(sizeof(struct node));
    cur->data = d;
    cur->next = NULL;
    if (*h == NULL)
    {
        *h = cur;
    }
    else if (pos == 0)
    {
        cur->next = *h;
        *h = cur;
    }
    else
    {
        ptr = *h;
        int i = 0;
        while (i < pos - 1 && ptr->next != NULL)
        {
            ptr = ptr->next;
            i++;
        }
        cur->next = ptr->next;
        ptr->next = cur;
    }
}
void evenodd(node **h)
{
    if (*h == NULL)
    {
        printf("No element");
    }
    else
    {
        struct node *ptr, *prv;
        prv = *h;
        ptr = prv->next;
        for (; ptr != NULL; prv = ptr, ptr = ptr->next)
        {
            if (ptr->data % 2 == 1)
            {
                prv->next = ptr->next;
                ptr->next = *h;
                *h = ptr;
                ptr = prv;
            }
        }
    }
}
void display(struct node *h)
{
    for (; h != NULL; h = h->next)
    {
        printf("%d\t", h->data);
    }
    printf("\n");
}
int main()
{
    int n;
    struct node *head = NULL;
    printf("Enter no. of nodes: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int v;
        printf("Enter data %d: ", i + 1);
        scanf("%d", &v);
        insert(&head, v, i);
    }
    display(head);
    evenodd(&head);
    display(head);
}
