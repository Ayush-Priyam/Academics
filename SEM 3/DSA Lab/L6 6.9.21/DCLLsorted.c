#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prv;
    struct node *next;
};
void insert(struct node **h, int data)
{
    struct node *cur, *ptr;
    int pos = 0;
    ptr = *h;
    if(*h != NULL)
    {
        do  
        {
            if (data < (ptr->data))
                break;
            else
            {
                pos++;
                ptr = ptr->next;
            }
        }while(ptr != *h);
    }
    cur = malloc(sizeof(struct node));
    cur->prv = NULL;
    cur->data = data;
    cur->next = NULL;
    if (*h == NULL)
    {
        *h = cur;
        cur->prv = cur;
        cur->next = cur;
    }
    else if (pos == 0)
    {
        cur->prv = (*h)->prv;
        (*h)->prv = cur;
        cur->next = (*h);
        *h = cur;
        cur->prv->next = *h;
    }
    else
    {
        ptr = *h;
        int i = 0;
        while (i < pos - 1)
        {
            ptr = ptr->next;
            i++;
        }
        cur->next = ptr->next;
        cur->prv = ptr;
        ptr->next->prv = cur;
        ptr->next = cur;
    }
}
void display(struct node *h)
{
    printf("List:\t ");
    struct node *head = h;
    if (h != NULL)
    {
        do
        {
            printf("%d, ", h->data);
            h = h->next;
        } while (h != head);
    }
    else
        printf("Empty List");
    printf("\n");
}
void delete (struct node **h, int k)
{
    struct node *ptr;
    if (*h == NULL)
    {
        printf("List is Empty\n");
    }
    else
    {
        int i = 0;
        ptr = *h;
        while (ptr->next != *h && i < k)
        {
            ptr = ptr->next;
            i++;
        }
        if (*h == (*h)->next)
        {
            *h = NULL;
            free(ptr);
        }
        else if (ptr == *h)
        {
            (*h)->prv->next = (*h)->next;
            ptr->next->prv = ptr->prv;
            *h = ptr->next;
            free(ptr);
        }
        else
        {
            ptr->prv->next = ptr->next;
            ptr->next->prv = ptr->prv;
            free(ptr);
        }
    }
}
int main()
{
    int n, c, v, k;
    struct node *head = NULL;
    printf("Enter no. of nodes: ");
    scanf("%d", &n);
    while (1)
    {
        printf("Enter 1.Insertion  2. Front Deletion 3. Mid Deletion  4. End Deletion\n");
        printf(" 5. Display   -1 TO STOP \nEnter Choice: ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("Enter value to insert in sorted manner: ");
            scanf("%d", &v);
            insert(&head, v);
            break;
        case 2:
            printf("Front node deleted.\n");
            delete (&head, 0);
            break;
        case 3:
            printf("Enter position to delete: ");
            scanf("%d", &k);
            delete (&head, k);
            printf("%dth node Deleted\n", k);
            break;
        case 4:
            printf("Front node deleted.\n");
            delete (&head, n - 1);
            break;
        case 5:
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