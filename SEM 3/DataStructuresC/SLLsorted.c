#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void insert(struct node **h, int d)
{
    int pos = 0;
    struct node *cur, *ptr = *h;
    while (*h != NULL && ptr != NULL)
    {
        if (d < (ptr->data))
            break;
        else
        {
            pos++;
            ptr = ptr->next;
        }
    }
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
void delete (struct node **h, int pos)
{
    struct node *ptr, *prv;
    ptr = *h;
    int i = 0;
    while (i < pos && ptr!= NULL)
    {
        prv=ptr;
        ptr = ptr->next;
        i++;
    }
    if (ptr == NULL)
    {
        printf("Empty List/Invalid Pos\n");
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
void display(struct node *h)
{
    printf("List: ");
    for (; h != NULL; h = h->next)
    {
        printf("%d, ", h->data);
    }
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