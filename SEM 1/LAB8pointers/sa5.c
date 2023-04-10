#include <stdio.h>
int main()
{
    char s[100];
    printf("\nEnter a string: ");
    gets(s);
    char *p = s;
    printf("\nEntered string is: ");
    while (*p != '\0')
        printf("%c", *p++);
    return 0;
}