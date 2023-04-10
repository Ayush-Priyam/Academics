#include <stdio.h>
int main()
{
    char s[1000];
    int i, l=0, sp, ep;
    printf("\nEnter a string:");
    gets(s);
    while (s[l]!='\0')
        l++;
    printf("\nEnter the starting position:");
    scanf("%d", &sp);
    printf("\nEnter the end position:");
    scanf("%d", &ep);
    if (ep-1>l)
        printf("\nWrong range");
    else
    {
        printf("\nThe extracted substring is: ");
        for (i = sp-1; i<ep-1; i++)
            printf("%c", s[i]);
    }
    return 0;
}