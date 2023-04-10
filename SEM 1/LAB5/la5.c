#include <stdio.h>
int main()
{
    int a[100], n;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("\nEnter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i=1; i <=n-1; i++)
    {
        for (int j=0; j<n-i; j++)
        {
            if (a[j]%2==0)
            {
                int t= a[j];
                a[j]= a[j+1];
                a[j+1]= t;
            }
        }
    }
    printf("\nThe elements in the order are: ");
    for (int i = 0; i < n; i++)
        printf("%d, ", a[i]);
    return 0;
}