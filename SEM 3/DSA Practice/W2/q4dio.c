/*4. In a one dimensional array find out all the elements and their position, which is the
summation of its immediate previous contiguous elements.*/
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
    for (int i = n-1; i>0 ; i--)
    {
        int s = 0;
        for (int j = i-1; j>=0; j--)
        {
            s = s + a[j];
            if (s == a[i] && a[i]!=a[i-1])
            {
                printf("%d at position %d\n", a[i], i+1);
                break;
            }
            if (s > a[i])
                break;
        }
    }
}