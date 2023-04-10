#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *next;
    int val;
};
typedef struct
{
    struct node *top;
}Stack;
void init(Stack *s)
{
    s->top = NULL;
}
int push(Stack *s, int v)
{
    struct node *cur, *tmp;
    cur = malloc(sizeof(struct node));
    if (s->top == NULL)
    {
        s->top = cur;
        cur->val = v;
        cur->next = cur;
    }
    else{
        cur->val = v;
        cur->next = s->top;
        tmp = s->top;
        while (tmp->next != s->top)
        {
            tmp = tmp->next;
        }
        cur->next = s->top;
        s->top = cur;
        tmp->next = cur;
    }
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
    else if (ptr->next == s->top)
    {
        *v = ptr->val;
        s->top = NULL;
        free(ptr);
    }
    else
    {
        *v = ptr->val;
        struct node *tmp = s->top;
        while (tmp->next != s->top)
        {
            tmp = tmp->next;
        }
        s->top = s->top->next;
        tmp->next = s->top;
        free(ptr);
    }
    return 0;
}
void display(Stack s)
{
    struct node *h = s.top;
    if (h != NULL)
    {
        do
        {
            printf("%d, ", h->val);
            h = h->next;
        } while (h!= s.top);
    }
    else
        printf("Empty List");
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