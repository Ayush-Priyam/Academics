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

void delete (struct node **h, int pos)
{

    struct node *ptr;
    ptr = *h;
    int i = 0;
    while (i < pos && ptr->next != NULL)
    {
        ptr = ptr->next;
        i++;
    }
    if (ptr == NULL)
    {
        printf("Empty List/Invalid pos\n");
    }
    else if (ptr == *h && ptr->next == NULL)
    {
        *h = NULL;
        free(ptr);
    }
    else if (ptr == *h)
    {
        *h = (*h)->next;
        (*h)->prv = NULL;
        free(ptr);
    }
    else if (ptr->next == NULL)
    {
        ptr->prv->next = NULL;
        free(ptr);
    }
    else
    {
        ptr->prv->next = ptr->next;
        ptr->next->prv = ptr->prv;
        free(ptr);
    }
}
void swap(struct node **h)
{
    struct node *ptr = *h;
    struct node *ptr1, *ptr2, *ptr3, *ptr4;
    while (ptr != NULL)
    {
        ptr1 = ptr;
        if (ptr1 != NULL)
        {
            ptr2 = ptr1->next;
            if (ptr2 != NULL)
            {
                ptr3 = ptr2->next;
                if (ptr3 != NULL)
                    ptr4 = ptr3->next;
            }
        }
        if (ptr1 == NULL || ptr2 == NULL || ptr3 == NULL || ptr4 == NULL)
        {
            return;
        }
        if (ptr4->data > ptr3->data && ptr3->data > ptr2->data && ptr2->data > ptr1->data)
        {
            if (ptr == h)
            {
                ptr3->prv = NULL;
                *h = ptr3;
            }
            ptr4->next = ptr1;
            ptr1->prv = ptr4;
            ptr2->next = ptr4->next;
        }
        if (ptr1->data > ptr2->data && ptr2->data > ptr1->data && ptr3->data > ptr4->data)
        {
            ptr2->next = ptr4->next;
            ptr1->next = ptr4;
            ptr4->next = ptr3;
            ptr4->prv = ptr1;
            ptr3->next = ptr2;
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