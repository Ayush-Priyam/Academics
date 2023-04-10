#include <stdio.h>
int main()
{
    char s1[1000], s2[1000];
    int f=0;
    printf("\nEnter first string : ");
    gets(s1);
    printf("\nEnter second string : ");
    gets(s2);
    for(int i=0; s1[i]!='\0'||s2[i]!='\0';i++)
    {
        if(s1[i]!=s2[i]) 
        {
            f=1; break;
        }
    }
    if(f==1) printf("Both strings are not equal");
    else printf("Both strings are equal");
    return 0;
}