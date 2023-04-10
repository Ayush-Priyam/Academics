#include <stdio.h>
#include <stdlib.h>
int r,c,f;
void search(int a[r][c], int i1, int j1, int s, int no1933)
{
    int sum=0;
    for (int i1933 = i1; i1933 <i1+s ; i1933++)//calculating sum from the given starting locations and submatrix size
    {
        for (int j = j1; j < j1+s; j++)
        {
            sum= sum +a[i1933][j];
        }
    }
    if(sum==no1933)
    {
        f=1;//gloabl variable changed if submatrix with given sum is found
        printf("\n%dX%d Subset Matrix with sum=%d:\n", s, s, sum);
        for (int i = i1; i < i1 + s; i++)//printing subset matrix with given sum
        {
            for (int j = j1; j < j1 + s; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }
    
}
int main()
{
    r=4; c=3; int k=1,sum1933;
    int a[r][c];
    for (int i = 0; i<r; i++)
    {
        for (int j = 0; j<c; j++)
        {
            //printf("input for %d %d= ", i, j);
            //scanf("%d ", &a[i][j]);
            a[i][j]=k++;
        }
    }
    printf("Original Matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    //scanf("%d", &sum1933);// sum to be searched
    sum1933=12;
    for(int s=1; s<=r&&s<=c; s++)//submatrix size loop
    {
        for (int i = 0; i <= r - 1; i++)//loops for passing array and starting locations for the search
        {
            for (int j = 0; j <= c - 1; j++)
            {
                search(a, i, j, s, sum1933);//passing array, starting location i and j, submatrix size s, sum
            }
        }
    }
    if(f==0) printf("\nNo Submatrix Found");
}