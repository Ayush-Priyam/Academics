#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    printf("\nEnter a string: ");
    gets(s);
    char *p = s;
    int l= strlen(s);
    printf("\nReversed string is: ");
    for(int i=l-1; i>=0;i--)
    {
        printf("%c", *(p+i));
    }
    return 0;
}