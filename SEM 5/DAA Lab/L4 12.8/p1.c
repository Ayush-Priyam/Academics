/*Let A be an array of n integers a0,a1,... ,an-1 (negative integers are allowed). Choose the 
sub- array a[i], a[i+1],... ,a[j] for all i≤j and find the sum of the elements of the subarray a[i..j] 
from range i to j and store it in another array S[] .Write a program by using an user defined
function(UDF) that must run in O(n2) time to find out the maximum value of S[i..j]for all the pair 
i, j with 0 ≤ i ≤ j ≤ n-1.
a. For example, for the array A[]={1, 3, 7, 2, 1, 5, 1, 2, 4, 6, 3}.
b. This maximum sum is S = S[3..] = 2+( 1)+5+( 1)+( 2)+4 = 7.*/
#include <stdio.h> 
#include <time.h>
#include <stdlib.h>
int maxx(int *a, int *s, int n)
{
    int i, j,ti, tj, max=a[0];
    int sum;
    int k=0;
    for(i=0; i<n; i++)
    {
        sum=0;
        for(j=i; j<n; j++)
        {
            sum= sum+ a[j];
            s[k++]= sum;
            if(max< sum)
            {
                ti=i;
                max= sum;
                tj=j;
            }
        }
    }
    printf("\nRange: %d to %d\n", ti, tj);
    return max;
}

void init(int *a, int n)
{
    srand(time(0));
    for(int i=0; i<n; i++)
    {
        a[i]= rand()%100;
        if(rand()%2==1) a[i]=-a[i];
    }
}
 
int main()
{
    int n;
    scanf("%d",&n);
    int a[n], s[n*n];
    init(a, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", a[i]);
    }
    printf("Max pairs= %d", maxx(a, s, n));
}