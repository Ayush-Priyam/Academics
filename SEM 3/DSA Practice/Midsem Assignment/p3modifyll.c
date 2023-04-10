#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct node
{
    int data;
    struct node *next;
};
void insert1933(struct node **h, int d, int pos)//usual insert fn
{
    struct node *cur, *ptr;
    cur = malloc(sizeof(struct node));
    cur->data = d;
    cur->next = NULL;
    if (*h == NULL)
    {
        *h = cur;
    }
    else if (pos == 0)
    {
        cur->next = *h;
        *h = cur;
    }
    else
    {
        ptr = *h;
        int i = 0;
        while (i < pos - 1 && ptr->next != NULL)
        {
            ptr = ptr->next;
            i++;
        }
        cur->next = ptr->next;
        ptr->next = cur;
    }
}
void display(struct node *h)//display fn
{
    printf("List:\t");
    for (; h != NULL; h = h->next)
    {
        printf("%d\t", h->data);
    }
    printf("\n");
}
void modify(struct node **h)
{
    /*LOGIC: ptr holds the ith node. traversing to the (n-i)th node. the liking the nodes.
    this goes on for the whole list till ptr reaches the 2nd last or the last node*/
    struct node *ptr,*ptr1,*prv;
    ptr=*h;
    ptr1=*h;
    while (ptr->next != NULL && ptr->next->next != NULL )
    {
        while(ptr1->next!=NULL)
        {
            prv=ptr1;
            ptr1=ptr1->next;
        }
        ptr1->next=ptr->next;
        ptr->next=ptr1;
        prv->next=NULL;
        ptr=ptr->next->next;
    }

}
int main()
{
    int n1933;
    struct node *head = NULL;
    //scanf("%d", &n);
    srand(time(0));
    n1933=rand()%10+3;//ensuring min no of nodes =3
    for (int i = 0; i < n1933; i++)
    {
        //int v;
        //printf("Enter data %d: ", i);
        //scanf("%d", &v);
        //insert(&head, v, i);
        insert1933(&head, rand()%100, i);//inserting random values
    }
    display(head);
    modify(&head);
    printf("Modified ");
    display(head);
}
