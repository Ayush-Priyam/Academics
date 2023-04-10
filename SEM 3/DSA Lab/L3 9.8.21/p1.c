#include <stdio.h>
struct people
{
    char name[20];
    int age;
    char city[10];
};
int main()
{
    int k = 0,p;
    struct people a[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter name of %dth person: ", i + 1);
        scanf("%s", a[i].name);
        fflush(stdin);
        printf("Enter age: ");
        scanf("%d", &a[i].age);
        fflush(stdin);
        if (k < a[i].age)
        {
            k = a[i].age;
            p = i;
        }
        printf("Enter city: ");
        scanf("%s", a[i].city);
        fflush(stdin);
    }
    printf("%d", p);
    printf("\nName of the eldest one: %s\nCity: %s", a[p].name, a[p].city);
}