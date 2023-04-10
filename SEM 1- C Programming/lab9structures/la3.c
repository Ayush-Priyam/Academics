#include <stdio.h>
struct time
{
    int h;
    float m;
};
int main()
{
    struct time d1, d2, ds;
    printf("\nEnter hours and minutes for 1st time: ");
    scanf("%d%f", &d1.h, &d1.m);
    printf("Enter hours and minutes for 2nd time: ");
    scanf("%d%f", &d2.h, &d2.m);
    ds.h = d1.h + d2.h;
    ds.m = d1.m + d2.m;
    if (ds.m > 60.0)
    {
        ds.m = ds.m - 60.0;
        ds.h++;
    }
    printf("\nSum of the times = %d hr %f min", ds.h, ds.m);
    return 0;
}