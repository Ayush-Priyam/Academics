#include <stdio.h>
int main()
{
    int a[100], n;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("\nEnter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\nThe 3 digit even elements are: ");
    for (int i = 0; i < n; i++)
    {
        if(a[i]>99 && a[i]<1000 && a[i]%2==0)
             printf("%d, ", a[i]);
    }
    return 0;
}