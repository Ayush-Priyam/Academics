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
    printf("\nEnter number of rows: ");
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
void mul(struct node *f, struct node *g, struct node **h)
{
    struct node *ptr, *ptr1, *ptr2, *cur;
    ;
    if (f->c != g->r)
        return;
    *h = malloc(sizeof(struct node));
    (*h)->r = f->r;
    (*h)->c = g->c;
    (*h)->v = 0;
    (*h)->next = NULL;
    ptr2 = *h;
    for (ptr = f->next; ptr != NULL; ptr = ptr->next)
    {
        for (ptr1 = g->next; ptr1 != NULL; ptr1 = ptr1->next)
        {
            if (ptr->c == ptr1->r)
            {
                cur = malloc(sizeof(struct node));
                cur->r = ptr->r;
                cur->c = ptr1->c;
                cur->v = (ptr->v) * (ptr1->v);
                cur->next = NULL;
                (*h)->v++;
                ptr2->next = cur;
                ptr2 = cur;
            }
        }
    }
}
void add(struct node **h)
{
    struct node *ptr, *ptr1, *prev;
    for (ptr = (*h)->next; ptr != NULL; ptr = ptr->next)
    {
        prev = ptr;
        ptr1 = ptr->next;
        while (ptr1 != NULL)
        {
            if (ptr1->r == ptr->r && ptr1->c == ptr->c)
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
    printf("\n1st sparse matrix:\n");
    display(h1);
    create(&h2);
    printf("\n2nd sparse matrix:\n");
    display(h2);
    printf("\nThe multiplied sparse matrix:\n");
    mul(h1, h2, &h);
    add(&h);
    display(h);
    return 0;
}