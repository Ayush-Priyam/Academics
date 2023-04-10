#include <stdio.h>
struct Distance
{
    int f;
    float i;
};
int main()
{
    struct Distance d1, d2, ds;
    printf("\nEnter feet and inch for 1st distance: ");
    scanf("%d%f", &d1.f, &d1.i);
    printf("Enter feet and inch for 2nd distance: ");
    scanf("%d%f", &d2.f, &d2.i);
    ds.f = d1.f + d2.f;
    ds.i = d1.i + d2.i;
    if (ds.i> 12.0)
    {
        ds.i = ds.i-12.0;
        ds.f++;
    }
    printf("\nSum of distances = %d\'-%f\"", ds.f, ds.i);
    return 0;
}