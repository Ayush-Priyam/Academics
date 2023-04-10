#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prv;
};

void insert(struct node **h, int val)
{
    int pos=1;
    struct node *cur, *ptr;
    cur = malloc(sizeof(struct node));
    cur->next = NULL;
    cur->prv = NULL;
    cur->data = val;
    if(val%2==1) pos=0;
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
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        cur->prv = ptr;
        ptr->next = cur;
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
        insert(&head, i);
    }
    display(head);

    display(head);
}
