#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int MAX;
    int *data;
    int top;
} Stack;
void init(Stack *s, int n)
{
    s->top = -1;
    s->MAX = n;
    s->data = malloc(s->MAX * sizeof(int));
}
int push(Stack *s, int v)
{
    if (s->top == s->MAX - 1)
    {
        printf("Overflow\n");
        return 1;
    }
    s->top++;
    s->data[s->top] = v;
    return 0;
}
int pop(Stack *s, int *v)
{
    if (s->top == -1)
    {
        printf("Underflow\n");
        return 1;
    }
    *v = s->data[s->top];
    s->top--;
    return 0;
}
void display(Stack s)
{
    if (s.top == -1)
    {
        printf("Empty Stack\n");
        return;
    }
    printf("Stack: ");
    for (int i = 0; i <= s.top; i++)
    {
        printf("%d, ", s.data[i]);
    }
    printf("\n");
}
int isempty(Stack s)
{
    if(s.top==-1) return 1;
    else return 0;
}
int main()
{
    Stack s, r;
    int n=10, v;
    // printf("Enter no of elements: ");
    // scanf("%d", &n);
    init(&s, n);
    init(&r,n);
    int k = push(&s, 10);
    k = push(&s, 5);
    k = push(&s, 8);
    display(s);
    k = push(&s, 7);
    k = push(&s, 11);
    display(s);
    while(!isempty(s))
    {
        int k= pop(&s,&v);
        // if (k == 0)
        //     printf("Popped element: %d\n", v);
        push(&r, v);
    }
    printf("Reversed ");
    display(r);
    return 0;
}
