#include <stdio.h>
int main()
{
    char s[100];
    char *p;
    int c=0;
    printf("\nEnter a string: ");
    gets(s);
    p=s;
    while(*p != '\0')
    {
        if (*p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U' || *p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u')
            c++;
        p++;
    }
    printf("\nTotal number of vowels= %d", c);
    return 0;
}