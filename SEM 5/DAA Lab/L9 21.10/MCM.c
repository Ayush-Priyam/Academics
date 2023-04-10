#include <stdio.h>
#include <stdlib.h>
void MCM(int n, int p[n], int m[n][n], int s[n - 1][n])
{
    n = n - 1;
    for(int i=1; i<=n; i++)
    {
        m[i][i]=0;
    }
    for(int l=2; l<=n; l++)
    {
        for(int i=1; i<=n-l+1; i++)
        {
            int j=i+l-1;
            m[i][j]=999999;
            for(int k=i; k<j; k++)
            {
                int q= m[i][k] +m[k+1][j]+ p[i-1]* p[k]* p[j];
                if(q<m[i][j])
                {
                    m[i][j]=q;
                    s[i][j]=k;
                    //printf("m[%d][%d]= %d \ts[%d][%d]= %d\n", i, j, m[i][j], i, j, s[i][j]);
                }
            }
        }
    }
}
void OP(int n, int s[n-1][n],int i, int j)
{
    //printf(" (%d,%d)  ", i, j);
    if(i==j)
    {
        printf(" A[%d] ", i);
    }
    else{
        printf("(");
        //printf(" (%d,%d)  ", i, s[i][j]);
        OP(n, s, i, s[i][j]);
        //printf(" (%d,%d)  ", s[i][j] + 1, j);
        OP(n, s, s[i][j] + 1, j);
        printf(")");
    }
}
int main()
{
    int n=5;
    int p[]={2,6,5,4,3};
    int m[n][n];
    int s[n-1][n+1];
    MCM(n,p, m,s);
    // for(int i=1; i<n; i++)
    // {
    //     for(int j=1; j<n; j++)
    //     if(j<i) printf(" ");
    //     else
    //         printf("%d ", m[j][i]);
    //     printf("\n");
    // }
    OP(n,s, 1, n-1);
}