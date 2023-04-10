#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct Queue
{
    struct node *front;
    struct node *rear;
    int size;
};
struct Queue *newMyQueue()
{
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    if (q == NULL)
    {
        printf("\n Memory overflow , When creating a new Queue");
    }
    else
    {
        q->front = NULL;
        q->rear = NULL;
        q->size = 0;
    }
    return q;
}
void enqueue(struct Queue *q, int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    if (node == NULL)
    {
        printf("\n Memory overflow , When creating a new Queue Node");
    }
    else
    {

        node->data = data;
        node->next = NULL;
        node->prev = q->rear;
        if (q->front == NULL)
        {

            q->front = node;
            q->size = 1;
        }
        else
        {
            q->rear->next = node;
            q->size = q->size + 1;
        }
        q->rear = node;
    }
}
int isEmpty(struct Queue *q)
{
    if (q->size == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int peek(struct Queue *q)
{
    if (isEmpty(q) == 1)
    {

        return -1;
    }
    else
    {
        return q->front->data;
    }
}
int isSize(struct Queue *q)
{
    return q->size;
}

int dequeue(struct Queue *q)
{
    if (isEmpty(q) == 1)
    {

        return -1;
    }
    else
    {
        int data = peek(q);
        struct node *temp = q->front;
        if (q->front == q->rear)
        {

            q->rear = NULL;
            q->front = NULL;
        }
        else
        {
            q->front = q->front->next;
            q->front->prev = NULL;
        }
        q->size--;
        free(temp);
        return data;
    }
}

void print(struct Queue *q)
{
    struct node *node = q->front;
    printf("\n Queue Element \n");
    while (node != NULL)
    {
        printf(" %d", node->data);
        node = node->next;
    }
    printf("\n");
}
int main()
{
    struct Queue *q = newMyQueue();
    enqueue(q, 1);
    enqueue(q, 2);
    enqueue(q, 3);
    enqueue(q, 4);
    enqueue(q, 5);
    print(q);
    printf(" Size : %d", isSize(q));
    printf("\n Dequeue Node : %d", dequeue(q));
    printf("\n Dequeue Node : %d", dequeue(q));
    printf("\n Dequeue Node : %d", dequeue(q));
    print(q);
    printf(" Size : %d", isSize(q));
    return 0;
}