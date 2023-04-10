#include <stdio.h>
int main()
{
    char s[1000];
    int l=0;
    printf("\nEnter a string: ");
    gets(s);
    while (s[l]!= '\0') l++;
    printf("\nLength of the String is: %d",l);
    return 0 ;
}