#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void insert(struct node **h, int pos, int d)
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
void delete_dup(struct node **h)
{
    struct node *ptrm, *ptr, *prv;
    if (*h == NULL)
    {
        printf("List is Empty\n");
    }
    else
    {
        ptrm = *h;
        for( ; ptrm != NULL; ptrm=ptrm->next)
        {
            prv = ptrm;
            ptr = ptrm->next;
            while (ptr != NULL)
            {
                if (ptr->data == ptrm->data)
                {
                    prv->next = ptr->next;
                    free(ptr);
                    ptr = prv;
                }
                prv = ptr;
                ptr = ptr->next;
            }
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

int main()
{
    int n;
    struct node *head = NULL;
    insert(&head, 0, 1);
    insert(&head, 1, 1);
    insert(&head, 2, 1);
    insert(&head, 3, 1);
    insert(&head, 4, 2);
    insert(&head, 5, 2);
    insert(&head, 6, 2);
    insert(&head, 3, 3);
    insert(&head, 4, 1);
    insert(&head, 3, 3);
    insert(&head, 3, 3);
    insert(&head, 3, 3);
    insert(&head, 2, 2);
    display(head);
    delete_dup(&head);
    printf("\n");
    display(head);
}