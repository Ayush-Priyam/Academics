// wap to store and display date using structure. add a date and display new date
// add a no and display new date
#include <stdio.h>
struct date
{
    int d, m, y;
};
void adddate(struct date a)
{
    int b;
    printf("Enter no to add: ");
    scanf("%d", &b);
    a.d = a.d + b;
    a.m= a.m+a.d/31;
    a.y= a.y+ a.m/13;
    a.m= a.m/13 +a.m%13;
    a.d= (a.d + b)%30;
    printf("New date: %d.%d.%d", a.d, a.m, a.y);
}
int main()
{
    int b;
    printf("Enter day, date, year: ");
    struct date a;
    scanf("%d", &a.d);
    scanf("%d", &a.m);
    scanf("%d", &a.y);
    printf("Input date: %d.%d.%d\n", a.d, a.m, a.y);
    adddate(a);
}
