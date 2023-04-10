#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    char data[20];
    struct node *next;
    int pr;
};
typedef struct
{
    struct node *front;
    struct node *rear;
}Queue;
void init(Queue *q)
{
    q->front=q->rear= NULL;
}
void insert(Queue *q, int k)
{
    struct node *ptr;
    char n[20];
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("OVERFLOW\n");
        return;
    }
    else
    {
        printf("Enter job: ");
        scanf("%s", &n);
        strcpy(ptr->data, n);
        ptr->pr= k;
        if (q->front == NULL)
        {
            q->front = ptr;
            q->rear = ptr;
            q->front->next = NULL;
            q->rear->next = NULL;
        }
        else
        {
            q->rear->next = ptr;
            q->rear = ptr;
            q->rear->next = NULL;
        }
    }
}
void delete(Queue *q)
{
    struct node *ptr;
    if (q->front == NULL)
    {
        printf("UNDERFLOW\n");
        return;
    }
    else
    {
        printf("Deleted\n");
        ptr = q->front;
        q->front = q->front->next;
        free(ptr);
    }
}
void display(Queue q)
{
    struct node *ptr;
    ptr = q.front;
    if (q.front == NULL)
    {
        printf("Empty queue");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%s, %d, ", ptr->data, ptr->pr);
            ptr = ptr->next;
        }
    }
    printf("\n");
}
int main()
{
    int c, p,p1;
    printf("Enter max priority: ");
    scanf("%d",&p);
    Queue q[p];
    for(int i=0; i<p; i++)
    {
        init(&q[i]);
    }
    while (1)
    {
        printf("0.Quit  1.Display  2.Insert  3.Delete    Enter Choice: ");
        scanf("%d", &c);
        switch (c)
        {
        case 0:
            printf("Thanks.");
            return 0;
        case 1:
            for(int i=0; i<p; i++)
            { 
                printf("Queue %d: ", i+1);
                display(q[i]);
            }
            break;
        case 2:
            printf("Enter priority of job: ");
            scanf("%d", &p1);
            insert(&q[p1-1], p1);
            break;
        case 3:
            printf("Enter priority to delete: ");
            scanf("%d", &p1);
            delete (&q[p1-1]);
            break;
        default:
            printf("Wrong Choice enter again.\n");
        }
    }
}