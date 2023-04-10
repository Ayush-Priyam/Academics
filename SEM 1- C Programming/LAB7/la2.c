#include <stdio.h>
#include <string.h>
int main()
{
    char s1[1000], s2[1000];
    int f = 0;
    printf("\nEnter first string : ");
    gets(s1);
    printf("\nEnter second string : ");
    gets(s2);
    printf("The concatenated string is %s%s",s1,s2);
    return 0;
}
    