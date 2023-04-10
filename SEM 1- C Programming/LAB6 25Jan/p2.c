#include <stdio.h>
int pal(int);
int main()
{
    int a;
    printf("\nEnter a number: ");
    scanf("%d", &a);
    pal(a);
    return 0;
}
int pal(int x)
{
    int n=x, rev=0,r;
    while (n != 0)
    {
        r =n%10;
        rev = rev *10 + r;
        n/=10;
    }
    if(rev==x) printf("Palindrome");
    else printf("Not palindrome");
    return 0;
}