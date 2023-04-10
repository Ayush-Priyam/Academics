// #include <stdio.h>
// #include <stdlib.h>
// typedef struct
// {
//     int MAX;
//     int *data;
//     int top;
// } Stack;
// Stack s1, s2;
// void init(Stack *s, int n)
// {
//     s->top = -1;
//     s->MAX = n;
//     s->data = malloc(s->MAX * sizeof(int));
// }
// int push(Stack *s, int v)
// {
//     if (s->top == s->MAX - 1)
//     {
//         printf("Overflow\n");
//         return 1;
//     }
//     s->top++;
//     s->data[s->top] = v;
//     return 0;
// }
// int isempty(Stack s)
// {
//     if(s.top==-1)
//         return 1;
//     else return 0;
// }
// int pop(Stack *s, int *v)
// {
//     if (s->top == -1)
//     {
//         printf("Underflow\n");
//         return 1;
//     }
//     *v = s->data[s->top];
//     s->top--;
//     return 0;
// }
// void display(Stack s)
// {
//     if (s.top == -1)
//     {
//         printf("Empty Stack\n");
//         return;
//     }
//     printf("Queue: ");
//     for (int i = 0; i <= s.top; i++)
//     {
//         printf("%d, ", s.data[i]);
//     }
//     printf("\n");
// }
// void insert(int v)
// {
//     push(&s1, v);
// }
// void delete(int *d)
// {
//     if(isempty(s1)&&isempt(s2))
//     {
//         printf("Empty");
//     }
//     else
//     {
//         if(!isempty(s2))
//         {
//             pop(&s2,d);
//         }
//         else{
//             while(!isempty(s1))
//             {
//                 int t;
//                 pop(&s1, &t);
//                 push(&s2,t);
//             }
//             pop(&s2,d);
//         }
//     }
// }
// int main()
// {
//     Stack s;
//     int n, v;
//     printf("Enter no of elements: ");
//     scanf("%d", &n);
//     init(&s, n);
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
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
int st1[100], st2[100];
int top1 = -1, top2 = -1;
int count = 0;
void create()
{
    top1 = top2 = -1;
}
void push1(int data)
{
    st1[++top1] = data;
}
int pop1()
{
    return (st1[top1--]);
}
void push2(int data)
{
    st2[++top2] = data;
}
int pop2()
{
    return (st2[top2--]);
}
void enqueue()
{
    int data, i;

    printf("Enter data into queue");
    scanf("%d", &data);
    push1(data);
    count++;
}
void dequeue()
{
    int i;

    for (i = 0; i <= count; i++)
    {
        push2(pop1());
    }
    pop2();
    count--;
    for (i = 0; i <= count; i++)
    {
        push1(pop2());
    }
}
void display()
{
    int i;

    for (i = 0; i <= top1; i++)
    {
        printf(" %d ", st1[i]);
    }
}
void main()
{
    int c;
    create();
    while (1)
    {
        printf("0.Quit  1.Enqueue  2.Dequeue   3.display   Enter Choice:  ");
        scanf("%d", &c);
        switch (c)
        {
        case 0:
            printf("Thanks");
            exit(0);
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        default:
            printf("Wrong choice");
        }
    }
}