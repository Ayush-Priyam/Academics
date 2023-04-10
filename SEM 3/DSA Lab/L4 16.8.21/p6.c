#include <stdio.h>
int prod(int a, int b)
{
    if(a==0) 
        return 0;
    else if(a%2==1)
        return b+ prod(a/2, b*2);
    else 
        return prod(a/2, b*2);
}
int main()
{
    int a, b, p= 0,p1;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    p1= prod(a,b);
    while (a!= 0)
    {
        if (a % 2 ==1)
        {
            p=p+b;
        }
        a = a/2;
        b = b*2;
    }
    printf("Product = %d, %d", p, p1);
}