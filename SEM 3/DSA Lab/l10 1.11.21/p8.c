#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    int pr;
    struct node *next, *prv;
};
typedef struct
{
    struct node *front, *rear;
} PQueue;
void init(PQueue *q)
{
    q->front = q->rear = NULL;
}
int insert(PQueue *q, int v, int p) // insertion according to priority
{
    int pos = 0;
    struct node *cur, *ptr = q->front;
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
    cur = malloc(sizeof(struct node));
    cur->data = v;
    cur->pr = p;
    cur->next = NULL;
    if (q->front == NULL)
    {
        q->front = cur;
    }
    else if (pos == 0)
    {
        cur->next = q->front;
        q->front = cur;
    }
    else
    {
        ptr = q->front;
        int i = 0;
        while (i < pos - 1 && ptr->next != NULL)
        {
            ptr = ptr->next;
            i++;
        }
        cur->next = ptr->next;
        ptr->next = cur;
    }
    return 0;
}
int delete (PQueue *q, int *d) // deletion of first element
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
        *d = q->front->data;
        struct node *ptr;
        ptr = q->front;
        q->front = q->front->next;
        q->front->prv = NULL;
        free(ptr);
    }
}