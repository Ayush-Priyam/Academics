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
void delete_odd(struct node **h,int n)
{
    struct node *ptr, *prv;
    if (*h == NULL)
    {
        printf("Empty List\n");
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            ptr = *h;
            while (ptr != NULL)
            {
                if (ptr->data%2!=0)
                {
                    break;
                }
                else
                {
                    prv = ptr;
                    ptr = ptr->next;
                }
            }
            if (ptr == NULL);
            else if (ptr == *h)
            {
                *h = ptr->next;
                free(ptr);
            }
            else
            {
            prv->next = ptr->next;
            free(ptr);
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
    delete_odd(&head,n);
    display(head);
}
