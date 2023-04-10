#include<stdio.h>
int rec(int a[],int n){

    if(n>=0)
    return a[n-1]+rec(a,n-1);
}
int iter(int a[],int sum,int i){
    sum = sum + a[i];
    return sum;
}
int main(){
    int n,sum=0,a[50];
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the numbers\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sum=rec(a,-1);
    printf("Sum after recursion = %d\n",sum);
    sum=0;
    for(int i=0;i<n;i++)
    {
        sum=iter(a,sum,i);
    }
    printf("Sum after iteration = %d\n",sum);
}