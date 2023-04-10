#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct
{
    struct node *front;
    struct node *rear;
} DEQueue;
void init(DEQueue *q)
{
    q->front = q->rear = NULL;
}
int insert(DEQueue *q, int v, int s)
{
    struct node *cur = malloc(sizeof(struct node));
    cur->data = v;
    cur->next = NULL;
    if (q->front == NULL)
    {
        q->front = q->rear = cur;
        q->rear->next=cur;
    }
    else
    {
        if (s == 0)
        {
            cur->next = q->front;
            q->front = q->rear->next = cur;
        }
        else
        {
            q->rear->next = cur;
            q->rear = cur;
            q->rear->next =q->front;
        }
    }
    return 0;
}
int delete (DEQueue *q, int *d, int s)
{
    if (q->front == NULL)
    {
        printf("Underflow");
        return 1;
    }
    else if (q->front == q->rear)
    {
        *d = q->front->data;
        free(q->front);
        q->front = q->rear = NULL;
    }
    else
    {
        if (s == 0)
        {
            struct node *ptr;
            ptr = q->front;
            *d = q->front->data;
            q->front = q->front->next;
            q->rear->next = q->front;
            free(ptr);
        }
        else
        {
            *d = q->rear->data;
            struct node *ptr;
            while (ptr->next->next != q->front)
                ptr = ptr->next;
            ptr->next = q->front;
            free(q->rear);
            q->rear = ptr;
        }
    }
    return 0;
}
void display(DEQueue *q)
{
    struct node *h = q->front;
    struct node *head = h;
    if (h != NULL)
    {
        do
        {
            printf("%d, ", h->data);
            h = h->next;
        } while (h != head);
    }
    else
        printf("Empty List");
    printf("\n");
}