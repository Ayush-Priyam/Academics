/*Pass a two dimensional array to a function and then add the 3rd and 4th row column wise 
and return back new row to the main function*/
#include <stdio.h>
#include<stdlib.h>
       int r,
       c;
int* sum(int (*)[r][c]);
int main()
{
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int a[r][c];
    printf("Enter the elements of the matrix\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int *b;
    b= sum(&a);
    for(int i=0;i<c;i++)
    {
        printf("%d, ",b[i]);
    }
    return 0;
}
int* sum(int (*b)[r][c])
{
    int *a= calloc(c,sizeof(int));
    for (int i = 0; i < c; i++)
    {
        a[i]=b[0][0][i]+b[0][1][i];
    }
    return a;
}