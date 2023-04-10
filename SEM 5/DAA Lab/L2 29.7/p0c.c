#include <stdio.h>
void pf(int n)
{
    int i = 2;
    if(n==1) {
        printf("1"); return;
        }
    
    while (n != 1)
    {
        if (n % i == 0)
        {
            printf("%d x ", i);
            n = n / i;
        }
        else
            i++;
    }
}
int main()
{
    //PRIME FACTORISTION
    pf(41);
}