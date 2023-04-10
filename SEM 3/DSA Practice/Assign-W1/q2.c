/*Write a program to display each byte for a decimal value 240 when it stored in a int variable
and float variable. (This is to understand that storage format is different for int and float)*/
#include <stdio.h>
int main()
{
    int x = 240;
    float y = 240.0;
    unsigned char *a = (unsigned char *)&x;
    unsigned char *b = (unsigned char *)&y;
    printf("Each byte for integer value: ");
    for (int i=0; i<4; i++)
        printf("%d, ", *(a + i));
    printf("\nEach byte for float value: ");
    for (int i=0; i<4; i++)
        printf("%d, ", *(b + i));
}