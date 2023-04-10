/*We have studied that array name for a two dimensional array points to first row of the array.
Can you write a pointer which will point to two rows of the same array.
If yes, then through that pointer display all the elements of the two dimensional array.*/
#include <stdio.h>
int main()
{
    int i, r, c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int a[r][c];
    printf("Enter the elements of the matrix\n");
    for (i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int(*b)[2 * c] = (int(*)[2 * c]) a; //pointer to two rows
    for (i = 0; i < r / 2; i++)
    {
        for (int j = 0; j < 2 * c; j++)
        {
            if (j % c == 0)
                printf("\n");
            printf("%d ", b[i][j]);
        }
    }
    if (r % 2 != 0) //for odd number of rows
    {
        i = r / 2;
        printf("\n");
        for (int j = 0; j < c; j++)
        {
            printf("%d ", b[i][j]);
        }
    }
    return 0;
}

/*#include <stdio.h>
int main()
{
    int r, c;
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
    int(*b)[2*c] = (int(*)[2*c])a;//pointer to two rows
    for (int i = 0; i < r/2; i++)
    {
        for (int j = 0; j < 2*c; j++)
        {
            if (j % c == 0)
                printf("\n");
            printf("%d ", b[i][j]);
        }
        if(r%2!=0)//for odd number of rows THIS SHOULD BE OUTSIDE FOR LOOP
        {
            printf("\n");
            for(int j=0; j<c; j++)
                printf("%d ", b[i+1][j]);
        }
    }
    return 0;
}*/
