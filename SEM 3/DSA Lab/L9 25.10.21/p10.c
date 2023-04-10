#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *rear = NULL;

void insert(int item);
int delete ();
void display();
int isEmpty();
int peek();
int main()
{
    int c, x;
    while (1)
    {
        printf("\n1.Insert\n");
        printf("2.Delete\n");
        printf("3.Peek\n");
        printf("4.Display\n");
        printf("5.Quit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &c);

        switch (c)
        {
        case 1:
            printf("\nEnter the element for insertion : ");
            scanf("%d", &x);
            insert(x);
            break;
        case 2:
            printf("\nDeleted element is %d\n", delete ());
            break;
        case 3:
            printf("\nItem at the front of queue is %d\n", peek());
            break;
        case 4:
            display();
            break;
        case 5:
            exit(1);
        default:
            printf("\nWrong choice\n");
        }
    }
}
void insert(int item)
{
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->data = item;
    if (tmp == NULL)
    {
        printf("\nMemory not available\n");
        return;
    }

    if (isEmpty())
    {
        rear = tmp;
        tmp->next = rear;
    }
    else
    {
        tmp->next = rear->next;
        rear->next = tmp;
        rear = tmp;
    }
}
delete ()
{
    int item;
    struct node *tmp;
    if (isEmpty())
    {
        printf("\nQueue underflow\n");
        exit(1);
    }
    if (rear->next == rear)
    {
        tmp = rear;
        rear = NULL;
    }
    else
    {
        tmp = rear->next;
        rear->next = rear->next->next;
    }
    item = tmp->data;
    free(tmp);
    return item;
}
int peek()
{
    if (isEmpty())
    {
        printf("\nQueue underflow\n");
        exit(1);
    }
    return rear->next->data;
}
int isEmpty()
{
    if (rear == NULL)
        return 1;
    else
        return 0;
}
void display()
{
    struct node *p;
    if (isEmpty())
    {
        printf("\nQueue is empty\n");
        return;
    }
    printf("\nQueue is :\n");
    p = rear->next;
    do
    {
        printf("%d ", p->data);
        p = p->next;
    } while (p != rear->next);
    printf("\n");
}
