#include<stdio.h>

void f1(int (*a)[3][3])
{
    int n=3;
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<n;j++)
         {
             printf("%d", a[i][j]);
         }
         printf("\n");
     }
}
int main()
{
    int n=3;
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    f1(&a);
}