#include <stdio.h>
struct train
{
    char name[20];
    int h;
    int m;
};
int main()
{
    int k;
    struct train a[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter name of train %d: ", i+1);
        scanf("%s", a[i].name);
        fflush(stdin);
        printf("Enter hour and minutes of arrival: ");
        scanf("%d %d", &a[i].h,&a[i].m);
        printf("Enter 0 for AM and 1 for PM: ");
        scanf("%d", &k);
        if (a[i].h==12) a[i].h=0;
        if (k == 1) a[i].h += 12;
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\nTrain: %s\tArrival: %d:%d HRS", a[i].name,a[i].h, a[i].m);
    }
}