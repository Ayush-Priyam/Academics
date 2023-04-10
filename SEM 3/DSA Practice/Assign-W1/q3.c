/*Write a program that will pass whole integer array to a function and return the sum of all the
elements of the array.*/
#include<stdio.h> 
int n;
int sum(int (*)[n]);
int main()
{
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Sum of elements= %d", sum(&a));
}

int sum(int (*b)[n])
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s = s + b[0][i];//*(*b+i);
    }
    return s;
}