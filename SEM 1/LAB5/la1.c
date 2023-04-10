#include<stdio.h>
int main()
{
    int a[10];
    printf("\nEnter integers: ");
    for (int i = 0; i <10; i++)
        scanf("%d", &a[i]);
    printf("\nThe elements are: ");
    for (int i = 0; i<10; i++)
        printf("%d, ", a[i]);
    return 0;
}