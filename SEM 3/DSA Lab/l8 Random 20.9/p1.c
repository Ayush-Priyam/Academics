#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prv;
};
void insert(struct node **h, int val, int pos)
{
    struct node *cur, *ptr;
    cur = malloc(sizeof(struct node));
    cur->next = NULL;
    cur->prv = NULL;
    cur->data = val;
    if (*h == NULL)
    {
        *h = cur;
    }
    else if (pos == 0)
    {
        cur->next = *h;
        (*h)->prv = cur;
        *h = cur;
    }
    else
    {
        ptr = *h;
        int i = 0;
        while (i < pos - 1 && (ptr->next != NULL))
        {
            ptr = ptr->next;
            i++;
        }
        if (ptr->next == NULL)
        {
            cur->prv = ptr;
            ptr->next = cur;
        }
        else
        {
            cur->prv = ptr;
            cur->next = ptr->next;
            ptr->next = cur;
            cur->next->prv = cur;
        }
    }
}
void display(struct node *h)
{
    if (h == NULL)
        printf("Empty List");
    for (; h != NULL; h = h->next)
    {
        printf("%d\t", h->data);
    }
    printf("\n");
}
int main()
{
    int n, v, i, j;
    struct node *head = NULL, *head1=NULL,*ptr,*ptr1;
    printf("Enter no. of nodes fo 1st DLL: ");
    scanf("%d", &n);
    printf("Enter data: ");
    for (i = 0; i < n; i++)
    {
        int v;
        scanf("%d", &v);
        insert(&head, v, i);
    }
    printf("Enter no. of nodes for 2nd DLL: ");
    scanf("%d", &n);
    printf("Enter data: ");
    for (i = 0; i < n; i++)
    {
        int v;
        scanf("%d", &v);
        insert(&head1, v, i);
    }
    i=0;
    ptr=head;
    while(ptr!=NULL)
    {
        ptr1=head1; j=0;
        while(ptr1!=NULL)
        {
            if(ptr->data==ptr1->data)//condition for intersection
            {
                //considering head node as 0th node
                printf("Intersection found: 1st DLL's node %d intersects with 2nd DLL's Node %d\n", i, j);
                printf("No of nodes in 1st DLL before intersecting point= %d\n",i);
                printf("No of nodes in 2nd DLL before intersecting point= %d\n", j);
                return 0;
            }
            j++;
            ptr1=ptr1->next;
        }
        i++;
        ptr=ptr->next;
    }
    printf("No intersection found");
}