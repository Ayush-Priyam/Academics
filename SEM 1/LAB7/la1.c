#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    int i;
    printf("\nEnter a string to extract last character of each word: ");
    gets(s);
    int l=strlen(s);
    s[l]=' ';
    s[l+1]='\0';
    printf("The extracted string is: ");
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
        {
            printf("%c", s[i - 1]);
        }
    }
    return 0;
}