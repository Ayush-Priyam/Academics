#include <stdio.h>
#include <string.h>
struct item
{
    char n[30];
    int q;
    float p;
    float amt;
};
int main()
{
    float e=0; int f, ni;
    struct item i[100];
    printf("\nEnter number of friends:");
    scanf("%d", &f);
    printf("\nEnter number of items:");
    scanf("%d", &ni);
    for (int j = 0; j < ni; j++)
    {
        printf("\nEnter Item-%d data:\nName: ", j + 1);
        getchar();
        gets(i[j].n);
        printf("Quantity: ");
        scanf("%d", &i[j].q);
        printf("Price: ");
        scanf("%f", &i[j].p);
        i[j].amt=i[j].p*i[j].q;
        e=e+ i[j].amt;
    }
    printf("Total Expense= %f \nEach friend has to pay= %f",e, e/f);
    return 0;
}