#include <stdio.h>

int main()
{
    int i, j, n, k;
    printf("Enter number to find prime factors: ");
    scanf("%d", &n);
    printf("The prime factors are: ");
    for (i=2; i<=n; i++)
    {
        if (n%i==0)
        {
            k=1;
            for (j=2; j<=i/2; j++)
            {
                if (i%j==0)
                {
                    k=0;
                    break;
                }
            }
            if (k==1) printf("%d, ", i);
        }
    }
    return 0;
}
