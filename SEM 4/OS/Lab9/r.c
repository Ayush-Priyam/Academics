#include <stdio.h>
int main()
{
    for(int i=0; i<10; i++)
    {
        for(int j=1; j<100; j++)
        {
            printf("%d", j);
            break;
        }
    }
}