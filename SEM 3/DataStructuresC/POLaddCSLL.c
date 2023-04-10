#include <stdio.h>
#include <stdlib.h>
struct node
{
    int exp;
    int coef;
    struct node *next;
};
void create(struct node **h)
{
    struct node *cur, *ptr;
    int nt;
    printf("Enter the no. of terms in the polynomial: ");
    scanf("%d", &nt);
    for (int i = 0; i < nt; i++)
    {
        cur = malloc(sizeof(struct node));
        printf("Enter the coefficient of term %d: ", i + 1);
        scanf("%d", &cur->coef);
        printf("Enter the exponent of term %d: ", i + 1);
        scanf("%d", &cur->exp);
        cur->next = NULL;
        if (*h == NULL)
        {
            *h = cur;
            ptr = cur;
            ptr->next = cur;
        }
        else
        {
            ptr->next = cur;
            cur->next = *h;
            ptr = cur;
        }
    }
}
void join(struct node **h1, struct node *h2)
{
    if (*h1 == NULL)
        *h1 = h2;
    else
    {
        struct node *ptr;
        for (ptr = *h1; ptr->next != *h1; ptr = ptr->next)
            ;
        ptr->next = h2;
        for (ptr = h2; ptr->next != h2; ptr = ptr->next)
            ;
        ptr->next = *h1;
    }
}
void add(struct node **h)
{
    struct node *ptr, *ptr1, *prev, *temp;
    for (ptr = *h; ptr->next != *h; ptr = ptr->next)
    {
        prev = ptr;
        ptr1 = ptr->next;
        while (ptr1->next != (*h)->next)
        {
            if (ptr1->exp == ptr->exp)
            {
                ptr->coef += ptr1->coef;
                prev->next = ptr1->next;
                free(ptr1);
                ptr1 = prev;
            }
            prev = ptr1;
            ptr1 = ptr1->next;
        }
    }
}
void display(struct node *h)
{
    struct node *ptr;
    for (ptr = h; ptr->next != h; ptr = ptr->next)
    {
        printf("%dx^%d", ptr->coef, ptr->exp);
        printf(" + ");
    }
    printf("%dx^%d", ptr->coef, ptr->exp);
    printf("\n");
}
int main()
{
    struct node *h1, *h2;
    h1 = h2 = NULL;
    create(&h1);
    create(&h2);
    printf("\nFirst Polynomial: ");
    display(h1);
    printf("\nSecond Polynomial: ");
    display(h2);
    join(&h1, h2);
    printf("\nJoined Polynomial: ");
    display(h1);
    add(&h1);
    printf("\nSum of Polynomials: ");
    display(h1);
}