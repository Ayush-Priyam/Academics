#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void insert(struct node **h, int d, int pos)
{
    struct node *cur, *tmp;
    cur = malloc(sizeof(struct node));
    cur->data = d;
    cur->next = NULL;
    if (*h == NULL)
    {
        *h = cur;
        cur->next=cur;
    }
    else if (pos == 0)
    {
        tmp=*h;
        while(tmp->next!=*h)
        {
            tmp=tmp->next;
        }
        cur->next = *h;
        *h = cur;
        tmp->next=cur;
    }
    else
    {
        tmp = *h;
        int i = 0;
        while (i < pos - 1)
        {
            tmp = tmp->next;
            i++;
        }
        cur->next = tmp->next;
        tmp->next = cur;
    }
}
void delete (struct node **h, int pos)
{
    struct node *ptr, *tmp, *prv;
    ptr=*h;
    int i=0;
    while (i<pos)
    {
        prv=ptr;
        ptr=ptr->next;
        i++;
    }
    if (ptr == NULL)
    {
        printf("Empty List");
    }
    else if (ptr==*h && ptr->next == *h)
    {
        *h = NULL;
        free(ptr);
    }
    else if(ptr==*h)
    {
        tmp=*h;
        while(tmp->next!=*h)
        {
            tmp=tmp->next;
        }
        *h=ptr->next;
        tmp->next = *h;
        free(ptr);
    }
    else
    {
        prv->next=ptr->next;
        free(ptr);
    }
}
void display(struct node *h)
{
    printf("List:\t ");
    struct node *head=h;
    if(h!=NULL)
    {
        do{
            printf("%d, ", h->data);
            h = h->next;
        }while(h!=head);
    }
    else
        printf("Empty List");
    printf("\n");
}

int main()
{
    int n, c, v, k;
    struct node *head = NULL;
    printf("Enter no. of nodes: ");
    scanf("%d", &n);
    while (1)
    {
        printf("Enter 1. Front Insertion  2. Mid Insertion  3. End Insertion  4. Front Deletion\n");
        printf("5. Mid Deletion  6. End Deletion  7. Display   -1 TO STOP \nEnter Choice: ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("Enter value to insert at the beginning: ");
            scanf("%d", &v);
            insert(&head, v, 0);
            break;
        case 2:
            printf("Enter value to insert: ");
            scanf("%d", &v);
            printf("Enter position: ");
            scanf("%d", &k);
            insert(&head, v, k);
            break;
        case 3:
            printf("Enter value to insert at the last: ");
            scanf("%d", &v);
            insert(&head, v, n - 1);
            break;
        case 4:
            printf("Front node deleted.\n");
            delete (&head, 0);
            break;
        case 5:
            printf("Enter position to delete: ");
            scanf("%d", &k);
            delete (&head, k);
            printf("%dth node Deleted\n", k);
            break;
        case 6:
            printf("Front node deleted.\n");
            delete (&head, n - 1);
            break;
        case 7:
            display(head);
            break;
        case -1:
            display(head);
            return 0;
        default:
            printf("Enter again\t");
        }
    }
}
