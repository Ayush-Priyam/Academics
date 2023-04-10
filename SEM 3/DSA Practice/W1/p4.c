#include <stdio.h>
void f1(int*,int*,int*);
int main()
{
    int x=2;
    int y=8;
    f1(&y,&x,&x);
    printf("%d,%d",x,y);
}
void f1(int *x, int *y, int *z)
{
    (*y)=(*y)+4;
    (*z)=(*x)+(*y)+(*z);
}