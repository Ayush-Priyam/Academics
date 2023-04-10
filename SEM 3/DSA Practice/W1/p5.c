#include <stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int(*p)[5] = (int(*)[5])&a;
    for(int i=0;i<5;i++)
    {
        printf("%d, ",*(*(p+1)+i));
    }
}
