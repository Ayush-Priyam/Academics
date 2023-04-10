/*4 Write a program that takes three variable (a. b. c) as separate parameters and rotates the
values stored so that value a goes to be. b. b to c and c to a by using SWAP(x.v)
function that swaps exchanges the numbers x & y.*/
#include <stdio.h>
#include <stdlib.h>
    int swap(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}
void rotate(int *a , int *b, int *c)
{
    swap(a, b);
    // printf("The values are: %d, %d & %d", a, b, c);
    swap(a, c);
}
int main()
{
    int a, b, c;
    a= rand()%100;
    b = rand() % 100;
    c = rand() % 100;
    scanf("%d %d %d", &a, &b, &c);
    printf("The initial values are: %d %d %d\n", a, b, c);
    rotate(&a,&b,&c);
    printf("The final values are: %d %d %d", a, b, c);
}