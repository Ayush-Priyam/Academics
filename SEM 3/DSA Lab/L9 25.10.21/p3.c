#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int front1 = -1, front2 = MAX;
int rear1 = -1, rear2 = MAX, arr[MAX];
void deque1();
void deque2();
void enque1();
void enque2();
int main()
{
    while(1)
    {
        int c;
        printf("0. Exit   1.Enque1    2.Enqueue2   3.Dequeue1   4.Dequeue2   Enter Choice:  ");
        scanf("%d", &c);
        switch(c)
        {
            case 0:
                exit(0);
            case 1:
                enque1();
                break;
            case 2:
                enque2();
                break;
            case 3:
                deque1();
                break;
            case 4:
                deque2();
                break;
            default:
                printf("Wrong Choice.\n");
        }
    }
}
void enque1()
{
    int item;
    if (rear1 < rear2 - 1)
    {
        printf("Enter value: ");
        scanf("%d", &item);
        if (front1 == -1)
            front1 = 0;
        rear1 = rear1 + 1;
        arr[rear1] = item;
    }
    else
        printf("1st queue Overflow\n");
}
void enque2()
{
    int item;
    if (rear1 < rear2 - 1)
    {
        printf("Enter data: ");
        scanf("%d", &item);
        if (front2 == MAX)
            front2 = MAX - 1;
        rear2 = rear2 - 1;
        arr[rear2] = item;
    }
    else
        printf("2nd queue overflow");
}
void deque1()
{
    int item;
    if (front1> rear1 || front1== -1)
        printf("1st Queue Underflow\n");
    else if (front1 <= rear1)
    {
        item = arr[front1];
        front1 = front1 + 1;
        printf("%d", item);
    }
}
void deque2()
{
    int item;
    if (front2 > rear2 || front2 == -1)
        printf("2nd Queue Underflow\n");
    if (front2 >= rear2)
    {
        item = arr[front2];
        front2 = front2 - 1;
        printf("%d", item);
    }
}