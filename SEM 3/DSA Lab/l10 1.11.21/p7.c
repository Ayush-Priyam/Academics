#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    int pr;
    struct node *next,*prv;
};

typedef struct
{
    struct node *front;
    struct node *rear;
} PQueue;
void init(PQueue *q)
{
    q->front = q->rear = NULL;
}
int insert(PQueue *q, int v, int p)
{
    struct node *cur, *ptr;
    int pos = 0;
    ptr =q->front;
    while (q->front != NULL && ptr != NULL)
    {
        if (p < (ptr->pr))
            break;
        else
        {
            pos++;
            ptr = ptr->next;
        }
    }
    cur =(struct node*) malloc(sizeof(struct node));
    cur->next = NULL;
    cur->prv = NULL;
    cur->data = v;
    cur->pr=p;
    if (q->front == NULL)
    {
        q->front = cur;
    }
    else if (pos == 0)
    {
        cur->next = q->front;
        (q->front)->prv = cur;
        q->front = cur;
    }
    else
    {
        ptr = q->front;
        int i = 0;
        while (i < pos - 1 && (ptr->next != NULL))
        {
            ptr = ptr->next;
            i++;
        }
        if (ptr->next == NULL)
        {
            cur->prv = ptr;
            ptr->next = cur;
        }
        else
        {
            cur->prv = ptr;
            cur->next = ptr->next;
            ptr->next = cur;
            cur->next->prv = cur;
        }
    }
    return 0;
}
int dele(PQueue *q, int *d)
{
    if (q->front == NULL)
    {
        printf("Underflow");
        return 1;
    }
    else if (q->front->next == NULL)
    {
        *d = q->front->data;
        free(q->front);
        q->front = q->rear = NULL;
    }
    else
    {
        struct node *ptr;
        *d = q->front->data;
        ptr = q->front;
        q->front = q->front->next;
        free(ptr);
    }
    return 0;
}