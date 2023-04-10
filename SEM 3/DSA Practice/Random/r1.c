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
void reverse1(struct node *ptr, struct node **h)
{
    if(ptr==NULL) return;
    struct node *ptr1;
    ptr1=ptr->next;
    if(ptr->next==NULL)
    {
        (*h)->next=NULL;
        (*h)=ptr;
    }
    else
    {
        reverse1(ptr1, h);
        ptr1->next=ptr;
    }
}
void reverse(struct node *h, struct node **mh)
{
    if (h == NULL)//for empty list
        return;
    struct node *ptr;
    ptr = h->next;
    if (h->next == NULL)
    {
        (*mh)->next = NULL;
        (*mh) = h;
    }
    else
    {
        reverse(ptr, mh);
        ptr->next = h;
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
void find(struct node *h, int no)
{
    int k = 0;
    for (; h != NULL; h = h->next)
    {
        if (no == h->data)
        {
            printf("Found\n");
            k = 1;
            break;
        }
    }
    if (k == 0)
        printf("Not Found\n");
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
        insert(&head, v, i);
    }
    display(head);
    reverse(head,&head);
    display(head);
    // display(head);
    // find(head, 5);
    // find(head, 3);
    // delete(&head, 3);
    // display(head);
}
