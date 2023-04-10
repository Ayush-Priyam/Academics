#include <stdio.h>
#include <stdlib.h>
struct node
{
    int exp;
    int cof;
    struct node *next;
};
void create(struct node **h)
{
    int nt;
    struct node *cur, *ptr;
    printf("\nEnter number of terms ");
    scanf("%d", &nt);
    for (int i = 0; i < nt; i++)
    {
        cur = malloc(sizeof(struct node));
        printf("\nEnter coefficient and exponent ");
        scanf("%d %d", &cur->cof, &cur->exp);
        cur->next = NULL;
        if (*h == NULL)
        {
            *h = cur;
            ptr = cur;
        }
        else
        {
            ptr->next = cur;
            ptr = cur;
        }
    }
}
void show(struct node *head)
{
    struct node *temp = head;
    printf("\nPolynomial is ");
    while (temp != NULL)
    {
        printf("%d x^%d", temp->cof, temp->exp);
        if (temp->next != NULL)
            printf(" + ");
        temp = temp->next;
    }
}
void join(struct node **h1, struct node *h2)
{
    if (*h1 == NULL)
    {
        *h1 = h2;
    }
    else
    {
        struct node *ptr;
        for (ptr = *h1; ptr->next != NULL; ptr = ptr->next)
            ;
        ptr->next = h2;
    }
}
void simplify(struct node **h)
{
    struct node *ptr, *ptr1, *prev;
    ptr = *h;
    while (ptr != NULL)
    {
        prev = ptr;
        ptr1 = ptr->next;
        while (ptr1 != NULL)
        {
            if (ptr1->exp == ptr->exp)
            {
                ptr->cof += ptr1->cof;
                prev->next = ptr1->next;
                free(ptr1);
                ptr1 = prev;
            }
            prev = ptr1;
            ptr1 = ptr1->next;
        }
        ptr = ptr->next;
    }
}
void display(struct node *h)
{
    struct node *temp = h;
    printf("\nResultant Polynomial is ");
    while (temp != NULL)
    {
        printf("%d x^%d", temp->cof, temp->exp);
        if (temp->next != NULL)
            printf(" + ");
        temp = temp->next;
    }
}
int main()
{
    struct node *h1, *h2;
    h1 = h2 = NULL;
    create(&h1);
    show(h1);
    create(&h2);
    show(h2);
    join(&h1, h2);
    display(h1);
    simplify(&h1);
    display(h1);
    return 0;
}