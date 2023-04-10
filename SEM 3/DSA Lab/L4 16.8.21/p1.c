#include <stdio.h>
int sum(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
int rsum(int n)
{
    if(n==1) return 1;
    else 
        return n+ rsum(n-1); 
}
int main()
{
    int n;
    printf("Enter a  no.: ");
    scanf("%d",&n);
    printf("Sum= %d,%d", sum(n), rsum(n));
}