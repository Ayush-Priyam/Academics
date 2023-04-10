#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *head = NULL;
void display(struct node *h)
{
    int i = 1;
    struct node *ptr;
    printf("Head = %d\n", h);
    for (ptr = h; ptr != NULL; ptr = ptr->next)
    {
        printf("Node %d:\n| Data: %d | Next node's address: %d |\n", i, ptr->data, ptr->next);
        i++;
    }
}
void occur(struct node **h, int v)
{
    int count = 0;
    struct node *ptr, *prv;
    if (*h == NULL) //For no node in the list i.e. empty list
    {
        printf("List is Empty\n");
    }
    else
    {
        ptr = *h;
        while (ptr != NULL) /*For moving ptr to the node containing data and
        prv to its previous node*/
        {
            if (ptr->data == v) //For moving ptr to the node which contains the data
            {
                count++;
                prv = ptr;
                ptr = ptr->next;
            }
            else /*For moving prv to the node just before ptr
            and for moving ptr to the next node*/
            {
                prv = ptr;
                ptr = ptr->next;
            }
        }
        if (count == 0)
            printf("Value Not Found\n");
        else
            printf("Occurrance of %d = %d\n", v, count);
    }
}
int main()
{
    int no, n, i, j, data, pos, val;
    struct node *cur, *ptr, *p;
    printf("Enter the number of nodes you want to create:\n");
    scanf("%d", &no);
    for (i = 0; i < no; i++)
    {
        cur = malloc(sizeof(struct node));
        cur->next = NULL;
        printf("Enter the data of Node %d :", i + 1);
        scanf("%d", &cur->data);
        if (head == NULL)
        {
            head = cur;
            ptr = cur;
        }
        else
        {
            ptr->next = cur;
            ptr = cur;
        }
    }
    int c = 0;
    ptr = head;
    for (i = 0; i < no; i++)
    {
        c = 0;
        p = head;
        while (p != ptr)
        {
            if (p->data == ptr->data)
                c++;
            p = p->next;
        }
        if (c == 0)
            occur(&head, ptr->data);
        ptr = ptr->next;
    }
}