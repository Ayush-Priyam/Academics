#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    printf("\nEnter a string: ");
    gets(s);
    if(strcmp(s,strrev(s))==0) 
        printf("Palindrome String");
    else
        printf("Not Palindrome String");
    return 0;
}
//WRONG PROGRAM 