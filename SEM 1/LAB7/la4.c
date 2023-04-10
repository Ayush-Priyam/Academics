#include <stdio.h>
#include <string.h>
int main()
{
    char s1[1000];
    int v = 0, c = 0, a=0, ch=-1, t=0, nl=0, w=0;
    printf("\nEnter a sentence to count the number of vowels and consonants: ");
    gets(s1);
    char s[2]=" ";
    strcat(s,s1);
    for (int i = 0; s[i] != '\0'; i++)
    {
        ch++;
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            a++;
            if(s[i-1]==' ') w++;
            if (s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' || s[i] == 'I' || s[i] == 'i' ||
                s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u')
                v++;
            else
                c++;
        }
        if(s[i]=='\n') nl++;
        if(s[i]=='\t') t++;
    }
    printf("\n Number of vowels is %d and the number of consonants is %d.", v, c);
    printf("\n Number of characters is %d", ch);
    printf("\n Number of newlines is %d", nl);
    printf("\n Number of tabs is %d", t);
    printf("\n Number of alphabets is %d", a);
    printf("\n Number of words is %d", w);
    return 0;
}