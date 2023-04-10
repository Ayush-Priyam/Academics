#include <stdio.h>
#include <stdlib.h>
struct node
{
    int r;
    int c;
    int v;
    struct node *next;
};
void create(struct node **h)
{
    struct node *cur, *ptr;
    *h = malloc(sizeof(struct node));
    printf("Enter number of rows: ");
    scanf("%d", &(*h)->r);
    printf("Enter number of columns: ");
    scanf("%d", &(*h)->c);
    printf("Enter number of non zero values: ");
    scanf("%d", &(*h)->v);
    ptr = *h;
    for (int i = 0; i < (*h)->v; i++)
    {
        cur = malloc(sizeof(struct node));
        printf("Enter row: ");
        scanf("%d", &cur->r);
        printf("Enter column: ");
        scanf("%d", &cur->c);
        printf("Enter the non zero value: ");
        scanf("%d", &cur->v);
        cur->next = NULL;
        ptr->next = cur;
        ptr = cur;
    }
}
void add(struct node *h1, struct node *h2, struct node **h)
{
    struct node *cur, *ptr, *ptr1, *ptr2, *prev;
    if (h1->r != h2->r || h1->c != h2->c)
        return;
    *h = malloc(sizeof(struct node));
    (*h)->r = h1->r;
    (*h)->c = h1->c;
    (*h)->v = h1->v + h2->v;
    (*h)->next = NULL;
    ptr2 = *h;
    for (ptr1 = h1->next; ptr1 != NULL; ptr1 = ptr1->next)
    {
        cur = malloc(sizeof(struct node));
        cur->r = ptr1->r;
        cur->c = ptr1->c;
        cur->v = ptr1->v;
        cur->next = NULL;
        ptr2->next = cur;
        ptr2 = cur;
    }
    for (ptr1 = h2->next; ptr1 != NULL; ptr1 = ptr1->next)
    {
        cur = malloc(sizeof(struct node));
        cur->r = ptr1->r;
        cur->c = ptr1->c;
        cur->v = ptr1->v;
        cur->next = NULL;
        ptr2->next = cur;
        ptr2 = cur;
    }
    for (ptr = (*h)->next; ptr != NULL; ptr = ptr->next)
    {
        prev = ptr;
        ptr1 = ptr->next;
        while (ptr1 != NULL)
        {
            if ((ptr->r == ptr1->r) && (ptr->c == ptr1->c))
            {
                ptr->v += ptr1->v;
                prev->next = ptr1->next;
                free(ptr1);
                ptr1 = prev;
                (*h)->v--;
            }
            prev = ptr1;
            ptr1 = ptr1->next;
        }
    }
}
void display(struct node *h)
{
    struct node *ptr;
    ptr = h;
    for (int i = 0; i <= (h->v); i++)
    {
        printf("\n| %d | %d | %d |\n", ptr->r, ptr->c, ptr->v);
        ptr = ptr->next;
    }
}
int main()
{
    struct node *h1, *h2, *h;
    h1 = h2 = NULL;
    create(&h1);
    display(h1);
    create(&h2);
    display(h2);
    printf("\nAdded Sparse matrix:\n");
    add(h1, h2, &h);
    display(h);
    return 0;
}