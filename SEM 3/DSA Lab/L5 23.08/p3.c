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
void rev(struct node **h, int m)
{
    struct node *ptr1, *ptr2;
    for (int k = 0; k < m / 2; k++)
    {
        ptr1 = *h;
        int i = 0;
        while (i < k && ptr1->next != NULL)
        {
            ptr1 = ptr1->next;
            i++;
        }
        ptr2 = *h;
        i = 0;
        while (i < m - k - 1 && ptr2->next != NULL)
        {
            ptr2 = ptr2->next;
            i++;
        }
        int x = ptr1->data;
        ptr1->data = ptr2->data;
        ptr2->data = x;
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
    int n,m;
    struct node *head = NULL;
    printf("Enter no. of nodes: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        insert(&head, i, i);
    }
    printf("Enter the no of elements to reverse: ");
    scanf("%d", &m);
    display(head);
    rev(&head, m);
    display(head);
}
