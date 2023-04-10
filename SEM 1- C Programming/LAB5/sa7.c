#include <stdio.h>
int main()
{
    int i, j, m, sum=0;
    printf("Enter the rows of the square matrix: ");
    scanf("%d", &m);
    int a[m][m];
    printf("Enter the elements of the matrix: \n");
    for (i=0; i<m; i++)
    {
        for (j=0; j<m; j++)
        {
            scanf("%d", &a[i][j]);
            if (i==j)
                sum=sum+a[i][j];
        }
    }
    printf("\nThe sum of the main diagonal elements is = %d", sum);
    return 0;
}