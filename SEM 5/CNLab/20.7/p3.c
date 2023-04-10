//wap to inpit a sentence and print the average no of letters in each wword; 
//with non uniform spaces
#include <stdio.h>
float let(char s[100])
{
    int x = 0, y = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ' && s[i + 1] != ' ' && s[i + 1] != '\0')
        {
            x++; // total words-1
        }
        if (s[i] != ' ' && s[i] != '\0')
        {
            y++; // total  no of letters/nos
        }
    }
    return (1.0 * y / (x + 1));
}
int main()
{
    char s[100];
    printf("Enter a sentence: ");
    gets(s);
    float x= let(s);
    printf("Avg no of words: %.2f",x );
}