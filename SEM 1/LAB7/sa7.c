#include <stdio.h>
int main()
{
    char s[1000];
    int v=0, c=0;
    printf("\nEnter a sentence to count the number of vowels and consonants: ");
    gets(s);
    for (int i=0; s[i]!='\0'; i++)
    {
        if ((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        {
            if(s[i]=='A' || s[i]=='a' || s[i]=='E' || s[i]=='e' || s[i]=='I' || s[i]=='i' || 
                            s[i]=='O' || s[i]=='o' || s[i]=='U' || s[i]=='u') v++;
            else c++;
        }
    }
    printf("\n Number of vowels is %d and the number of consonants is %d.", v, c);
    return 0;
}