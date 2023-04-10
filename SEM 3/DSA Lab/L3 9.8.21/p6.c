#include <stdio.h>
int main()
{
    int n,i, j, k;
    printf("Enter Odd number: ");
    scanf("%d",&n);
    int s = (n * (n * n + 1)) / 2;
    int a[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            a[i][j]=0;
        }
    }
    k=1;
    i=n-1;
    j=n/2;
    while(k<n*n+1)
    {
        if(i==n&&j==-1)
        {
            i=n-2;
            j=0;
        }
        else
        {
            if(i==n)
            {
                i=0;
            }
            if(j==-1)
            {
                j=n-1;
            }
        }
        if(a[i][j]!=0)
        {
            i=i-2;
            j=j+1;
        }
        a[i][j]=k++;
        i=i+1;
        j=j-1;
    }
    printf("\nSum of Each Row and column= %d\n", s);
    printf("\nMagic Matrix\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}