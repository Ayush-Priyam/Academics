#include <stdio.h>
int main()
{
    char s[1000], c1;
    int f = 0;
    printf("Enter a sentence: ");
    gets(s);
    printf("\nEnter a character to be replaced: ");
    scanf("%c", &c1);
    for (int i = 3; s[i] != '\0'; i++)
    {
        if (s[i] == c1)
        {
            s[i] = s[i-3];
            f = 1;
        }
    }
    if (f == 1)
        printf("\nNew string= %s", s);
    else
        printf("\nCharacter is not present in the sentence");
    return 0;
}