#include <stdio.h>
int main()
{
    int i;
    char s[1000], c[1000];
    printf("\nEnter a string: ");
    gets(s);
    for(i=0;s[i]!='\0'; i++) c[i]=s[i];
    c[i]='\0';
    printf("\nCopied String is ");
    puts(c);
    return 0;
}