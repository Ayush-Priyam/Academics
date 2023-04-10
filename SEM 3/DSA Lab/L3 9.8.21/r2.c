#include <stdio.h>
#include <string.h>

void check_magic_square(int limit);

int main()
{
    int num;
    printf("\nEnter an Odd Number:\t");
    scanf("%d", &num);
    check_magic_square(num);
    return 0;
}

void check_magic_square(int limit)
{
    int num, sum, i, j;
    int matrix[limit][limit];
    memset(matrix, 0, sizeof(matrix));
    i = limit - 1;
    j = limit / 2;
    for (num = 1; num <= limit * limit;)
    {
        if ((j == -1) && (i == limit))
        {
            i = limit - 2;
            j = 0;
        }
        else
        {
            if (i == limit)
            {
                i = 0;
            }
            if (j < 0)
            {
                j = limit - 1;
            }
        }
        if (matrix[i][j])
        {
            i = i - 2;
            j++;
            continue;
        }
        else
        {
            matrix[i][j] = num++;
        }
        i++;
        j--;
    }
    sum = (limit * (limit * limit + 1)) / 2;
    printf("\nSum of Each Row:\t%d\n", sum);
    printf("\nSum of Each Column:\t%d\n", sum);
    printf("\nSquare Matrix\n");
    for (i = 0; i < limit; i++)
    {
        for (j = 0; j < limit; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}