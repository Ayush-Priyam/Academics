#include <stdio.h>
#include <stdlib.h>
int flag = 0;
void one(int a[][4], int n);
void two(int a[][4], int n);
void three(int a[][4], int n);
void main()
{
    int a[4][4] = {{1, 2, 3, 4}, {9, 3, 4, 53}, {4, 6, 3, 2}, {7, 3, 8, 35}};
    int n = 35;
    one(a, n);
        two(a, n);
        three(a, n);
    if (flag == 1)
    {
        printf("THE ORIGINAL MATRIX WAS :-\n");
        for (int r = 0; r < 4; r++)
        {
            for (int c = 0; c < 4; c++)
            {
                printf("%d ", a[r][c]);
            }
            printf("\n");
        }
    }
    if (flag == 0)
        printf("NO SUB MATRIX WITH SUM EQUAL TO GIVEN DATA CAN BE FOUND :(");
}
void one(int a[4][4], int n)
{
    int r = 0, c = 0, sum = 0;
    for (r = 0; r < 4; r++)
    {
        for (c = 0; c < 4; c++)
        {
            if (a[r][c] == n)
            {
                printf("NO IS FOUND IN 1*1 MATRIX :)\n AT POSITION of ROW & COLUMNS : %d %d", r, c);
                printf("\n");
                //flag = 1;
                return;
            }
            // else
            // {
            //     sum += a[r][c];
            //     if (a[r][c] == n)
            //     {
            //         printf("A SUBSET MATRIX WITH SUM EQUAL TO %d found :)\n at POSITION %d %d:\nTHE MATRIX IS:-\n", n, r, c);
            //         printf("\n");
            //         flag = 1;
            //     }
            // }
        }
    }
}
void two(int a[4][4], int n)
{
    int r = 0, c = 0, count = 0, sum = 0;
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 4; c++)
        {
            sum += (a[r][c] + a[r + 1][c]);
            count++;
            if (count == 2 && sum == n)
            {
                printf("A SUBSET MATRIX WITH SUM EQUAL TO %d found in 2*2 MATRIX at %d %d:\nTHE MATRIX IS:-\n", n, r, c);
                flag = 1;
                break;
            }
            else if (count == 2)
            {
                count = 0;
                sum = 0;
                c--;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
    {
        int m = c;
        for (int n = 0; n < 2 + r; n++)
        {
            for (c = 0; c <= m; c++)
            {
                printf("%d ", a[n][c]);
            }
            printf("\n");
        }
    }
}
void three(int a[4][4], int n)
{
    int r = 0, c = 0, count = 0, sum = 0;
    for (r = 0; r < 2; r++)
    {
        for (c = 0; c < 4; c++)
        {
            sum += (a[r][c] + a[r + 1][c] + a[r + 2][c]);
            count++;
            if (count == 3 && sum == n)
            {
                printf("\nA SUBSET MATRIX WITH SUM EQUAL TO %d found :)\nin 2*2 MATRIX at %d %d:\nTHE MATRIX IS:-\n", n, r, c);
                flag = 1;
                break;
            }
            else if (count == 3)
            {
                count = 0;
                sum = 0;
                c--;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
    {
        int m = c;
        for (int n = 0; n < 3 + r; n++)
        {
            for (c = 0; c <= m; c++)
            {
                printf("%d ", a[n][c]);
            }
            printf("\n");
        }
    }
}