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
    for (; h != NULL; h = h->next)
    {
        printf("%d\t", h->data);
    }
    printf("\n");
}

void delete (struct node **h, int v)
{
    if (*h == NULL)
    {
        printf("Empty List");
    }
    else
    {
        struct node *ptr;
        ptr = *h;
        while (ptr != NULL)
        {
            if (ptr->data == v)
                break;
            ptr = ptr->next;
        }
        if (ptr == NULL)
        {
            printf("Data not Found");
        }
        else if (ptr == *h && ptr->next == NULL)
        {
            *h = NULL;
            free(ptr);
        }
        else if (ptr == *h)
        {
            *h = (*h)->next;
            (*h)->prv = NULL;
            free(ptr);
        }
        else if (ptr->next == NULL)
        {
            printf("%d",ptr->prv->data);
            (ptr->prv)->next = NULL;
            free(ptr);
        }
        else
        {
            ptr->prv->next = ptr->next;
            ptr->next->prv = ptr->prv;
            free(ptr);
        }
    }
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
    delete (&head, 4);
    display(head);
}
