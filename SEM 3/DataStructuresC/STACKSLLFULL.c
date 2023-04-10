// *******USING LINKED LIST **************//
#include <stdio.h>
#include <stdlib.h>
//DECLARATION OF LINKED LIST STACK
struct node
{
    int val;
    struct node *next;
};
typedef struct
{
    struct node *top;
} STACK;
//PUSH FUNCTION
int push(STACK *S, int v)
{
    struct node *cur;
    cur = malloc(sizeof(struct node));
    if (cur == NULL)
    {
        printf("OF");
        return 1;
    }
    cur->val = v;
    cur->next = S->top;
    S->top = cur;
    return 0;
}

//POP FUNCTION
int pop(STACK *S, struct node **data)
{
    if (S->top == NULL)
    {
        printf("Underflow");
        return 1;
    }
    struct node *ptr;
    ptr = S->top;
    S->top = S->top->next;
    *data = ptr;
    //free (ptr);
    return 0;
}

void init(STACK *S)
{
    S->top = NULL;
}
void dis(STACK *s)
{
    if (s->top != NULL)
    {
        struct node *ptr;
        pop(s, &ptr);
        printf("%d ", ptr->val);
        dis(s);
        push(s, ptr->val);
        free(ptr);
    }
}
void insort(STACK *s, int v)
{
    if (s->top == NULL)
    {
        push(s, v);
    }
    else
    {
        struct node *ptr;
        pop(s, &ptr);
        if (ptr->val > v)
        {
            insort(s, v);
            push(s, ptr->val);
        }
        else
        {
            push(s, ptr->val);
            push(s, v);
        }
    }
}
void sort(STACK *s)
{
    if (s->top != NULL)
    {
        struct node *ptr;
        pop(s, &ptr);
        sort(s);
        insort(s, ptr->val);
    }
}
int main()
{
    STACK s1;
    init(&s1);
    for (int i = 1; i < 10; i++)
        //insort(&s1, random()%100);
        push(&s1, random() % 100);
    dis(&s1);
    printf("\n");
    sort(&s1);
    dis(&s1);
}
