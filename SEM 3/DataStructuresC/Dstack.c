#include <stdio.h>
#define max 10
typedef struct
{
    int data[max];
    int top[2];
} DStack;
void init(DStack *s)
{
    s->top[0]=-1;
    s->top[1]=max;
}
int push(DStack *s,int v, int t)
{
    if(s->top[0]+1==s->top[1])
    {
        printf("Overflow");
        return 1;
    }
    else
    {
        if(t==0) s->top[0]++;
        else s->top[1]--;
        s->data[s->top[t]]=v;
        return 0;
    }
}
int pop(DStack *s, int *v, int t)
{
    if((t==0&&s->top[0]==-1)||(t=1&&s->top[1]==max))
    {
        printf("Underflow");
        return 1;
    }
    *v=s->data[s->top[t]];
    if (t == 0)
        s->top[0]--;
    else
        s->top[1]++;
    return 0;
}