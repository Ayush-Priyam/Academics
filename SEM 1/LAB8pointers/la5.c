#include <stdio.h>
int main()
{
    int a[100], n, *p, t;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("\nEnter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    p=a;    
    for (int i = 0; i <= n - 1; i++)
    {

        for (int j = i + 1; j < n; j++)
        {

            if (*(p + j) < *(p + i))
            {
                t = *(p + i);
                *(p + i) = *(p + j);
                *(p+ j) = t;
            }
        }
    }
    printf("\nThe elements in the order are: ");
    for (int i = 0; i < n; i++)
        printf("%d, ", a[i]);
    return 0;
}