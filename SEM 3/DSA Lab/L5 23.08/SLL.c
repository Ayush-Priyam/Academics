#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void insert(struct node **h, int d, int pos)
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
void delete(struct node **h, int v)
{
    struct node *ptr,*prv;
    if(*h==NULL)
    {
        printf("Empty List\n");
    }
    else
    {
        ptr=*h;
        while(ptr!=NULL)
        {
            if(ptr->data==v)
                break;
            else
            {
                prv=ptr;
                ptr=ptr->next;
            }
        }
        if(ptr==NULL)
        {
            printf("Data Not Found");
        }
        else if (ptr == *h)
        {
            *h = ptr->next;
            free(ptr);
        }
        else
        {
            prv->next = ptr->next;
            free(ptr);
        }
    }
}
void display(struct node *h)
{
    for(;h !=NULL; h=h->next)
    {
        printf("%d\t", h->data);
    }
    printf("\n");
}
void find(struct node *h, int no)
{
    int k=0;
    for(; h != NULL; h = h->next)
    {
        if(no== h->data)
        {
            printf("Found\n");
            k=1;
            break;
        }
    }
    if(k==0)
    printf("Not Found\n");
}
int main()
{
    int n;
    struct node *head = NULL;
    printf("Enter no. of nodes: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        insert(&head, i, i);
    }
    display(head);
    find(head, 5);
    find(head, 3);
    delete(&head, 3);
    display(head);
}

