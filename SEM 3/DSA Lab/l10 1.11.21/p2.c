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
}DEQueue;
void init(DEQueue *q)
{
    q->front=q->rear=NULL;
}
int insert(DEQueue *q, int v, int s)
{
    struct node *cur=malloc(sizeof(struct node));
    cur->data=v;
    cur->next=NULL;
    if(q->front==NULL)
    {
        q->front=q->rear=cur;
    }
    else{
        if(s==0)
        {
            cur->next=q->front;
            q->front=cur;
        }
        else
        {
            q->rear->next=cur;
            q->rear=cur;
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
    else if(q->front ==q->rear)
    {
        *d=q->front->data;
        free(q->front);
        q->front=q->rear=NULL;
    }
    else{
        if(s==0)
        {
            struct node *ptr;
            ptr=q->front;
            q->front=q->front->next;
            free(ptr);
        }
        else
        {
            struct node *ptr;
            while(ptr->next->next!=NULL)
                ptr=ptr->next;
            ptr->next=NULL;
            free(q->rear);
            q->rear= ptr;
        }
    }
}
void display(DEQueue *q)
{
    struct node *h=q->front;
    if(h==NULL)
        printf("Empty List");
    for (; h != NULL; h = h->next)
    {
        printf("%d\t", h->data);
    }
    printf("\n");
}