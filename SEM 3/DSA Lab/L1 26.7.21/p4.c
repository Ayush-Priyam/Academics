#include <stdio.h>
int main()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    printf("Original number: %d \n", n);
    printf("1st Block: %d \n", n&255);//255= 11111111
    //right shifting and finding the blocks' decimal value
    printf("2nd Block: %d \n", (n >> 8) & 255);
    printf("3rd Block: %d \n", (n >> 16) & 255);
    printf("4th Block: %d \n", (n >> 24) & 255);
    return 0;
}
