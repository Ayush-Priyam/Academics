#include <stdio.h>
void maxwindow(int arr[], int n, int k)
{
    int j, max;
    for (int i = 0; i <= n - k; i++)
    {
        max = arr[i];
        for (j = 1; j < k; j++)
        {
            if (arr[i + j] > max)
                max = arr[i + j];
        }
        printf("%d \n", max);
    }
}
int main()
{
    int n, w;
    printf("Enter No of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter window size: ");
    scanf("%d", &w);
    if(w<=n)
    {
        printf("Max Elements as per window size: \n");
        maxwindow(arr, n,w);
    }
    else
        printf("Invalid window size.");
    return 0;
}