#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct node
{
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
    cur->next = s->top;
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
    free(ptr);
    return 0;
}
void display(Stack s)
{
    struct node *h = s.top;
    if (h == NULL)
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
void insort(Stack *s, int v)
{
    if (s->top == NULL)
    {
        push(s, v);
    }
    else
    {
        int val;
        pop(s, &val);
        if (val < v)
        {
            insort(s, v);
            push(s, val);
        }
        else
        {
            push(s, val);
            push(s, v);
        }
    }
}
void sort(Stack *s)
{
    if (s->top != NULL)
    {
        int val;
        pop(s, &val);
        sort(s);
        insort(s, val);
    }
}
int main()
{
    Stack s;
    int n, v;
    init(&s);
    for (int i = 0; i < 10; i++)
        push(&s, rand() % 100);
    display(s);
    sort(&s);
    display(s);
    return 0;
}