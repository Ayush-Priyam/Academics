// wap to store and display date using structure. add a date and display new date
// add a no and display new date
#include <stdio.h>
struct date
{
    int d, m, y;
};
void adddate(struct date *a, int b)
{
    a->d = a->d + b;
    while (a->d > 30)
    {
        (a->m)++;
        a->d = a->d - 30;
        if (a->m >= 13)
        {
            a->y++;
            a->m = a->m - 12;
        }
    }
    printf("New date: %d.%d.%d", a->d, a->m, a->y);
}
void input(struct date *a)
{
    printf("Enter day, date, year: ");
    scanf("%d", &(a->d));
    scanf("%d", &(a->m));
    scanf("%d", &(a->y));
    printf("Input date: %d.%d.%d\n", a->d, a->m, a->y);
}
int main()
{
    int b;
    //printf("Enter day, date, year: ");
    struct date a;
    input(&a);
    printf("Enter days to add: ");
    scanf("%d", &b);
    adddate(&a, b);
}
