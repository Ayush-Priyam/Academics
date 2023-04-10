#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int MAX;
    char *data;
    int top;
} Stack;
void init(Stack *s, int n)
{
    s->top = -1;
    s->MAX = n;
    s->data = malloc(s->MAX * sizeof(char));
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
int pop(Stack *s, char *v)
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
        printf("%c ", s.data[i]);
    }
    printf("\n");
}
int main()
{
    Stack s;
    int n=10;
    char c, v;
    int k;
    // printf("Enter no of elements: ");
    // scanf("%d", &n);
    char cc[n];
    init(&s, n);
    printf("Enter: ");
    scanf("%s", &cc);
    printf("%s\n", cc);
    for(int i=0; i<n;i++)
    {
        k=1;
        if (cc[i] == '[' || cc[i] == '{' || cc[i] == '(')
            push(&s, cc[i]);
        else if (cc[i] == ']')
        {
            printf("HELLO]");
            do{
                k= pop(&s,&v);
            } while (v != '['||k!=1);
        }
        else if (cc[i] == '}')
        {
            printf("HELLO}");
            do
            {
                k= pop(&s, &v);
            } while (v != '{'||k!=1);
        }
        else if (cc[i] == ')')
        {
            printf("HELLO)");
            while(1)
            {
                k = pop(&s, &v);
                if(k==1) break;
                if (v == cc[i] == '(') break;
            }
        }
        if (k == 0)
            printf("Popped element: %c\n", v);
    }
    display(s);
    // k = pop(&s, &v);
    // if (k == 0)
    //     printf("Popped element: %c\n", v);
    // display(s);
    // k = pop(&s, &v);
    // if (k == 0)
    //     printf("Popped element: %c\n", v);
    // display(s);
    return 0;
}
