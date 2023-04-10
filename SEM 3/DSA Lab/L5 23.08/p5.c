#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void insert(struct node **h, int d)
{
    int pos=0;
    struct node *cur, *ptr=*h;
    while(*h!=NULL && ptr!=NULL)
    {
        if(d< (ptr->data)) break;
        else
        {
            pos++;
            ptr=ptr->next;
        }
    }
    cur = malloc(sizeof(struct node));
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
        printf("Enter data %d: ", i);
        scanf("%d", &v);
        insert(&head, v);
    }
    display(head);
}
