#include <stdio.h>
int main()
{
    printf("Machine config is 64 bit");
    printf("\nSize of char pointer: %d", sizeof(char *));
    printf("\nSize of int pointer: %d", sizeof(int *));
    printf("\nSize of float pointer: %d", sizeof(float *));
    printf("\nSize of long int pointer: %d", sizeof(long int *));
    printf("\nSize of double pointer: %d\n", sizeof(double *));
    return 0;
}