#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prv;
};

void insert(struct node **h, int val)
{
    struct node *cur, *ptr;
    int pos = 0;
    ptr = *h;
    while (*h != NULL && ptr != NULL)
    {
        if (val < (ptr->data))
            break;
        else
        {
            pos++;
            ptr = ptr->next;
        }
    }
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
