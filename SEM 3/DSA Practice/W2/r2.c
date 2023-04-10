#include <stdio.h>
int main()
{
     int i=0, j, count=0;
    for(j=-2;j<=3;j++)
    {
        if((j>=0) && (i++))
            count=count +i;
    }
    count=count+j;
    printf("%d",count);    

}