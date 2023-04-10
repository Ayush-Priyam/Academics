#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c=0;
    for(int i=1; i<=120; i++)
    {
        if(i%6!=0 &&(i%2==0||i%5==0))
        c++;
    }
    printf("%d",c);
}