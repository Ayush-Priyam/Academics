#include <stdio.h>
int main()
{
    char s[1000];
    int l, i;
    printf("\nEnter a string: ");
    gets(s);
    for(l=0; s[l]!='\0'; l++);
    printf("\nThe reverse of the string is: ");
    for (i=l-1;i>=0;i--)
        printf("% c", s[i]);
    return 0;
}