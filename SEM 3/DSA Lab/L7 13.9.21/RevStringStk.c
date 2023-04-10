#include <stdio.h>
#include <string.h>
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
int push(Stack *s, char v)
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
        printf("%c", s.data[i]);
    }
    printf("\n");
}
int main()
{
    char str[100];
    int i=0;
    Stack os,rs;
    printf("input string:");
    gets(str);
    int l= strlen(str);
    init(&os,l);
    init(&rs, l);
    while(str[i]!='\0')
    {
        push(&os, str[i]);
        i++;
    }
    display(os);
    while(os.top!=-1)
    {
        char v;
        pop(&os,&v);
        push(&rs,v);
    }
    printf("Reverse ");
    display(rs);
}
