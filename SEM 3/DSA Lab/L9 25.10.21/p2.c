#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front;
struct node *rear;
void insert()
{
    struct node *ptr;
    int n;

    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("OVERFLOW\n");
        return;
    }
    else
    {
        printf("\nEnter value: ");
        scanf("%d", &n);
        ptr->data = n;
        if (front == NULL)
        {
            front = ptr;
            rear = ptr;
            front->next = NULL;
            rear->next = NULL;
        }
        else
        {
            rear->next = ptr;
            rear = ptr;
            rear->next = NULL;
        }
    }
}
void delete ()
{
    struct node *ptr;
    if (front == NULL)
    {
        printf("UNDERFLOW\n");
        return;
    }
    else
    {
        printf("Deleted element: %d\n", front->data);
        ptr = front;
        front = front->next;
        free(ptr);
    }
}
void display()
{
    struct node *ptr;
    ptr = front;
    if (front == NULL)
    {
        printf("Empty queue\n");
    }
    else
    {
        printf("\nQueue: ");
        while (ptr != NULL)
        {
            printf("\n%d, ", ptr->data);
            ptr = ptr->next;
        }
    }
}
int main()
{
    int c, v, k;
    while (1)
    {
        printf("0.Quit  1.CheckQueue  2.Display   3.Insert  4.Delete    Enter Choice: ");
        scanf("%d", &c);
        switch (c)
        {
        case 0:
            printf("Thanks");
            return 0;
        case 1:
            if (front == NULL)
            {
                printf("Empty Queue\n");
            }
            else
                printf("Not Empty\n");
            break;
        case 2:
            display();
            break;
        case 3:
            insert();
            break;
        case 4:
                delete();
            break;
        default:
            printf("Wrong Choice enter again.\n");
        }
    }
}