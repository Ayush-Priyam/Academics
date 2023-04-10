#include <stdio.h>
#include <string.h>
struct book
{
    char n[30];
    char au[30];
    char pu[30];
    float p;
};
int main()
{
    struct book b[100];
    int nb;
    printf("\nEnter number of books: ");
    scanf("%d", &nb);
    for (int i = 0; i < nb; i++)
    {
        printf("\nEnter book-%d data:\n", i + 1);
        printf("Name: ");
        getchar();
        gets(b[i].n);
        printf("Author: ");
        gets(b[i].au);
        printf("Publication: ");
        gets(b[i].pu);
        printf("Price: ");
        scanf("%f", &b[i].p);
    }
    for (int i = 0; i < nb; i++)
    {
        printf("\nBook-%d \nName: %s \nAuthor: %s\nPublication:%s \nPrice: %.2f \n\n", i+1, b[i].n, b[i].au, b[i].pu, b[i].p);
    }
    return 0;
}