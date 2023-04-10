#include <stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front = -1;
struct node *rear = -1;
void enqueue(int x)
{
    struct node *curr;
    curr = (struct node *)malloc(sizeof(struct node));
    curr->data = x;
    curr->next = 0;
    if (rear == -1)
    {
        front = rear = curr;
        rear->next = front;
    }
    else
    {
        rear->next = curr;
        rear = curr;
        rear->next = front;
    }
}
void dequeue()
{
    struct node *temp;
    temp = front;
    if ((front == -1) && (rear == -1))
    {
        printf("\nQueue is empty");
    }
    else if (front == rear)
    {
        front = rear = -1;
        free(temp);
    }
    else
    {
        front = front->next;
        rear->next = front;
        free(temp);
    }
}
int peek()
{
    if ((front == -1) && (rear == -1))
    {
        printf("\nQueue is empty");
    }
    else
    {
        printf("\nThe front element is %d", front->data);
    }
}
void display()
{
    struct node *temp;
    temp = front;
    printf("\n The elements in a Queue are : ");
    if ((front == -1) && (rear == -1))
    {
        printf("Queue is empty");
    }
    else
    {
        while (temp->next != front)
        {
            printf("%d,", temp->data);
            temp = temp->next;
        }
        printf("%d", temp->data);
    }
}
void main()
{
    enqueue(15);
    enqueue(10);
    enqueue(4);
    display();
    dequeue();
    peek();
}