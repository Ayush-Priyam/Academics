#include <stdio.h>
int main()
{
    char s[1000];
    int a = 0, e = 0, iv = 0, o = 0, u = 0, c = 0;
    printf("\nEnter a sentence to count the number of vowels and consonants: ");
    gets(s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            if(s[i] == 'A' || s[i] == 'a') a++;
            else if( s[i] == 'E' || s[i] == 'e') e++;
            else if(s[i] == 'I' || s[i] == 'i') iv++;
            else if(s[i] == 'O' || s[i] == 'o') o++;
            else if(s[i] == 'U' || s[i] == 'u') u++;
            else c++;
        }
    }
    printf("\n Frequency of \n 1. a= %d \n 2. e= %d \n 3. i= %d \n 4. o= %d \n 5. u= %d \n \nThe number of consonants is %d.", a,e,iv,o,u,c);
    return 0;
}