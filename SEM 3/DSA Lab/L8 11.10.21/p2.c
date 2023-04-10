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
// int main()
// {
//     Stack s;
//     int n, v;
//     init(&s);
//     int k = push(&s, 10);
//     k = push(&s, 5);
//     k = push(&s, 8);
//     display(s);
//     k = push(&s, 7);
//     k = push(&s, 11);
//     display(s);
//     k = pop(&s, &v);
//     if (k == 0)
//         printf("Popped element: %d\n", v);
//     k = pop(&s, &v);
//     if (k == 0)
//         printf("Popped element: %d\n", v);
//     display(s);
//     k = pop(&s, &v);
//     if (k == 0)
//         printf("Popped element: %d\n", v);
//     k = pop(&s, &v);
//     if (k == 0)
//         printf("Popped element: %d\n", v);
//     display(s);
//     k = pop(&s, &v);
//     k = pop(&s, &v);
//     display(s);
//     return 0;
// }
int main()
{
    int c, v, k;
    Stack s;
    init(&s);
    while (1)
    {
        printf("0.Quit  1.CheckStack  2.Display   3.Push  4.Pop:    Enter Choice: ");
        scanf("%d", &c);
        switch (c)
        {
        case 0:
            printf("Thanks");
            return 0;
        case 1:
            if (s.top == NULL)
            {
                printf("Empty Stack\n");
            }
            else
                printf("Not Empty\n");
            break;
        case 2:
            display(s);
            break;
        case 3:
            printf("Enter value to push: ");
            scanf("%d", &v);
            push(&s, v);
            break;
        case 4:
            k = pop(&s, &v);
            if (k == 0)
                printf("Popped element: %d\n", v);
            break;
        default:
            printf("Wrong Choice enter again.\n");
        }
    }
}