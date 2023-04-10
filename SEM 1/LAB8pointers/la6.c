#include <stdio.h>
int main()
{
    char s[100];
    char *p;
    int c = 0, v=0;
    printf("\nEnter a string: ");
    gets(s);
    p = s;
    while (*p != '\0')
    {
        if ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z'))
        {
            if (*p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U' || *p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u')
                v++;
            else
                c++;
        }
        p++;
    }
    printf("\nTotal number of vowels= %d\n Total number of consonants= %d", v, c);
    return 0;
}