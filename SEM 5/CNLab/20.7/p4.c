//wap to store and display date using structureadd a date and display new date
#include <stdio.h>
struct date
{
    int d,m, y;
};
int x[13]={0,31,28,31,30,31,30,31, 31, 30, 31, 30, 31};
int main()
{
    int b;
    printf("Enter day, date, year: ");
    struct date a;
    scanf("%d", &a.d);
    scanf("%d", &a.m);
    scanf("%d", &a.y);
    printf("Input date: %d.%d.%d\n", a.d, a.m, a.y);
    if(a.y%4==0) x[2]++;
    printf("Enter no less than 30 to add: ");
    scanf("%d", &b);
    if(b+a.d> x[a.m])
    {
        a.d= a.d+b-x[a.m];
        a.m++;
    }
    else
        a.d = a.d + b;
    if(a.m>=13) 
    {
        a.y++;
        a.m=a.m-12;
    }
    printf("New date: %d.%d.%d", a.d, a.m,a.y);
}