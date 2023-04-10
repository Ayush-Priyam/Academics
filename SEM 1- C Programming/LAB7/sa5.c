#include <stdio.h>
int main()
{
    char s[1000];
    int i;
    printf("\nEnter a string to extract first character of each word: ");
    gets(s);
    printf("The extracted string is: ");
    for (i=0; s[i] != '\0'; i++)
    {
        if (s[i]==' ')
        {
            printf("%c", s[i+1]);
        }
    }
    return 0;
}