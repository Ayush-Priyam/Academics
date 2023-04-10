#include <stdio.h>
#include <math.h>
int bin(int n)
{
    int b= 0, r, p = 1;
    while (n != 0)
    {
        r = n % 2;
        b= b+ r * p;
        p = p*10;
        n= n/2;
    }
    return b;
}
int rbin(int n, int p)
{
    int r= n%2;
    if(n==0) return 0;
    else 
        return r*p+rbin(n/2, p*10);
}
int oct(int n)
{
    int b = 0, r, p = 1;
    while (n != 0)
    {
        r = n % 8;
        b = b + r * p;
        p = p * 10;
        n = n / 8;
    }
    return b;
}
/*int roct(int n, int p)
{
    int r = n % 8;
    if (n<8)
        return r*p;
    else
        return (r*p + rbin(n/8, p*10));
}*/
void roct(int n)
{
    if (n > 0)
    {
        roct(n/8);
        printf("%d", n % 8);
    }
}
int main()
{
    int n;
    printf("Enter a no: ");
    scanf("%d", &n);
    printf("Binary of %d= %d, %d\n", n, bin(n), rbin(n,1));
    printf("Octal of %d= %d,", n, oct(n));roct(n);
    return 0;
}