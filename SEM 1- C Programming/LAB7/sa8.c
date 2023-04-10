#include <stdio.h>
int main()
{
    char s[1000], c1, c2;
    int f= 0;
    printf("Enter a sentence: ");
    gets(s);
    printf("\nEnter a character to be replaced and the new character: ");
    scanf("%c %c", &c1, &c2);
    for(int i = 0 ;s[i]!='\0' ; i++)
    {
        if (s[i] == c1)
        {
            s[i]= c2;
            f=1;
        }
    }
    if (f == 1)
    printf("\nNew string= %s",s);
    else printf("\nCharacter is not present in the sentence");
    return 0;
}