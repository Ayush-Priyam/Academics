#include <stdio.h>
int main()
{
    int n, k;
    printf("Enter the number to find prime factors: ");
    scanf("%d", &n);
    printf("The prime factors are= ");
    for (int i = 2; i <= n/2; i++)
    {
        if(n%i==0)
        {
            k=0;
            for (int j=3; j <= i/2; j++)
            {
                if(i%j==0) k=1;
            }
            if(k=0) printf("%d, ",i);
        }
    }
    return 0;
}