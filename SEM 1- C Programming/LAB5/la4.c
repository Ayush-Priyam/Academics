#include <stdio.h>
int main()
{
    int a[50], n;
    printf("Enter size: ");
    scanf("%d", &n);
    if(n%2==0)
    {
        printf("\nEnter elements: ");
        for (int i=1; i<n; i=i+2)
        {
            scanf("%d", &a[i]);
            scanf("%d", &a[i-1]);
        }
        printf("\nThe swapped elements are: ");
        for (int i = 0; i<n; i++)
            printf("%d, ", a[i]);
    }
    else printf("Enter Even Size");
    return 0;
}