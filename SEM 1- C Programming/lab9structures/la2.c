#include <stdio.h>
struct Distance
{
    int km;
    float m;
};
int main()
{
    struct Distance d1, d2, ds;
    printf("\nEnter km and m for 1st distance: ");
    scanf("%d%f", &d1.km, &d1.m);
    printf("Enter km and m for 2nd distance: ");
    scanf("%d%f", &d2.km, &d2.m);
    ds.km = d1.km + d2.km;
    ds.m = d1.m + d2.m;
    if (ds.m >= 1000.0)
    {
        int x= ds.m/1000;
        ds.m = ds.m - x*1000.0;
        ds.km= ds.km+x;
    }
    printf("\nSum of distances = %d km %.3f m", ds.km, ds.m);
    return 0;
}