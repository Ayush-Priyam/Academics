/*
//Consider an n × n matrix A = aij,  each of elements of a is a nonnegative real
Number. Write a program by defining an user defined function that is used to
produce the rounded matrix as shown below. Find out the Computation time of your
function.
*/
#include <stdio.h>
#include <math.h>
#include <time.h>
#include<stdlib.h>
double fun(int n, double a[n][n], int b[n][n])
{
    int i, j;
    clock_t s, e;
    s = clock();
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            b[i][j] = (int)(a[i][j] +0.5);
        }
    }
    e= clock();
    double t = (e - s) * 1.0 / CLOCKS_PER_SEC;
    printf("time reqd: = %lf seconds\n", t);
    return t;
}
double init(int n, double a[n][n])
{
    //printf("\nEnter elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // printf("Enter element a[%d,%d]: ", i + 1, j + 1);
            //scanf("%lf", &a[i][j]);
            a[i][j]= rand()%100 + (rand()%100)*1.0/100;
        }
    }
}
void display(int n, double a[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%lf  ", a[i][j]);
        }
        printf("\n");
    }
} 
int main()
{
    int n, i, j;
    printf("Enter n: ");
    scanf("%d", &n);
    double a[n][n];
    int b[n][n];
    init(n, a);
    //disp(n,a);
    fun(n, a, b);
    //disp(n,a);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// 1.1 1.2 1.3 1.4 1.5 1.6 1.7 1.8 1.9