#include <stdio.h>
int main()
{
    int n, c=0;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    int b=n;
    while(n!=0)//counting the number of 1's in the binary equivalent
    {
        if(n%2==1) c++;//incrementing counter whenever 1 is found
        n= n/2;
    }
    printf("No. of 1's in the binary equivalent of %d is %d",b,c);
    return 0;
}
