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
        while (i < pos - 1)
        {
            ptr = ptr->next;
            i++;
        }
        cur->next = ptr->next;
        ptr->next = cur;
    }
}
void swap(struct node **h, int k, int n)
{
    struct node *ptr1, *ptr2;
        ptr1 = *h;
        int i = 0;
        while (i < k-1 && ptr1->next != NULL)
        {
            ptr1 = ptr1->next;
            i++;
        }
        ptr2 = *h;
        i = 0;
        while (i < n - k && ptr2->next != NULL)
        {
            ptr2 = ptr2->next;
            i++;
        }
        int x = ptr1->data;
        ptr1->data = ptr2->data;
        ptr2->data = x;
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
    int k;
    int n;
    struct node *head = NULL;
    printf("Enter no. of nodes: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        insert(&head, i, i);
    }
    display(head);
    printf("Enter pos to swap: ");
    scanf("%d", &k);
    swap(&head, k, n);
    display(head);
}
