//Write a program that will display all the elements of an one dimensional array using double pointer 
#include<stdio.h> 
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int *b=a;
    int **k=&b;//double pointer
    printf("\nElements: ");
    for(int i=0; i<n;i++)
    {
        printf("%d, ",k[0][i]);
    }
}