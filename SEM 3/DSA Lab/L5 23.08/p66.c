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
void freq(struct node *h, int no)
{
    int k = 0;
    for (; h != NULL; h = h->next)
    {
        if (no == h->data)
        {
            k++;
        }
    }
    printf("freq of %d= %d\n", no, k);
}
int main()
{
    int n;
    struct node *head = NULL, *ptr, *p;
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
    ptr = head;
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        p = head;
        while (p != ptr)
        {
            if (p->data == ptr->data)
                c++;
            p = p->next;
        }
        if (c == 0)
            freq(head, ptr->data);
        ptr = ptr->next;
    }
}