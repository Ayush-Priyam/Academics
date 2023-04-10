#include <stdio.h>
#include<string.h>
int main()
{
    char p[9]="happy";
    int s=strlen(p);
    char n[5]="happy";
    int s1 = strlen(n);
    printf("%d, %d", s,s1);
    //printf("\n %s, %s", p[100], n[200]);
    return 0;
}


/*int main()
{
    char p[20];
    char *s= "string";
    int length= strlen(s);
    for(int i= 0; i<length;i++)
    {
        p[i]= s[length-i-1];
    }
    printf("%s",p);
}*/