#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prv;
    struct node *next;
    int val;
};
typedef struct
{
    struct node *top;
} Stack;
void init(Stack *s)
{
    s->top = NULL;
}
int push(Stack *s, int v)
{
    struct node *cur;
    cur = malloc(sizeof(struct node));
    cur->val = v;
    cur->prv = NULL;
    cur->next = s->top;
    if (s->top != NULL)
        s->top->prv = cur;
    s->top = cur;
    return 0;
}
int pop(Stack *s, int *v)
{
    struct node *ptr = s->top;
    if (ptr == NULL)
    {
        printf("Underflow\n");
        return 1;
    }
    *v = ptr->val;
    s->top = s->top->next;
    if (s->top != NULL)
        s->top->prv = NULL;
    free(ptr);
    return 0;
}
void display(Stack s)
{
    struct node *h = s.top;
    if(h==NULL)
    {
        printf("Empty Stack\n");
        return;
    }
    for (; h != NULL; h = h->next)
    {
        printf("%d\t", h->val);
    }
    printf("\n");
}
int main()
{
    Stack s;
    int v;
    init(&s);
    int k = push(&s, 10);
    k = push(&s, 5);
    k = push(&s, 8);
    display(s);
    k = push(&s, 7);
    k = push(&s, 11);
    display(s);
    k = pop(&s, &v);
    if (k == 0)
        printf("Popped element: %d\n", v);
    k = pop(&s, &v);
    if (k == 0)
        printf("Popped element: %d\n", v);
    display(s);
    k = pop(&s, &v);
    if (k == 0)
        printf("Popped element: %d\n", v);
    k = pop(&s, &v);
    if (k == 0)
        printf("Popped element: %d\n", v);
    display(s);
    k = pop(&s, &v);
    k = pop(&s, &v);
    k = pop(&s, &v);
    display(s);
    return 0;
}