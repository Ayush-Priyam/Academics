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
void evenodd(struct node **h)
{
    if (*h == NULL)
    {
        printf("No element");
    }
    else
    {
        struct node *ptr, *prv, *tail;
        while(ptr->next!=NULL)
            ptr=ptr->next;
        tail=ptr;
        prv= ptr = *h;
        for (; ptr != NULL; prv = ptr, ptr = ptr->next)
        {
            if (ptr->data % 2 == 0)
            {
                if(ptr==*h)
                {
                    printf("%d", ptr->data);
                    tail->next=ptr;
                    *h=(*h)->next;
                    ptr->next=NULL;
                    tail=ptr;
                    ptr=prv; 
                }
                else
                {
                    prv->next=ptr->next;
                    tail->next=ptr;
                    ptr->next=NULL;
                    tail=ptr;
                    ptr=prv;
                }
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
        insert(&head, i, i);
    }
    display(head);
    evenodd(&head);
    display(head);
}
