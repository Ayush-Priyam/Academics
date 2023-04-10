#include <stdio.h>
int main()
{
    int i, n, l,c=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (i == 0)
        {
            l = a[0];
        }
        if (i > 0 && l < a[i])
        {
            l = a[i];
            c=0;
        }
        if(a[i]==l) c++;
    }
    printf("\nLargest= %d \nFrequency= %d", l, c);
}