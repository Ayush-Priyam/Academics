#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *head = NULL;

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
void display(struct node *h)
{
    for (; h != NULL; h = h->next)
    {
        printf("%d\t", h->data);
    }
    printf("\n");
}
void move(struct node **h, int v)
{
    struct node *ptr, *prv;
    if (*h == NULL)
    {
        printf("Empty List\n");
    }
    else
    {
        ptr = *h;
        while (ptr != NULL)
        {
            if (ptr->data == v)
            {
                insert(&head, v, 0);
                break;
            }
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
int main()
{
    int n, s;
    struct node *cur, *ptr;
    printf("Enter no. of nodes: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        insert(&head, i, i);
    }
    display(head);
    printf("Enter no to search: ");
    scanf("%d", &s);
    cur = head;
    while (cur->next != NULL)
    {
        if (cur->next->data == s)
        {
            ptr = cur;
            cur = cur->next;
            ptr->next = cur->next;

            cur->next = head;
            head = cur;
        }
        else
        {
            cur = cur->next;
        }
    }
    display(head);
}
