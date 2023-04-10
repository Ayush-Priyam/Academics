#include <stdio.h>
int main()
{
    int n;   
    int *p; 
    p = &n; 
    n = 5;  
    printf("");
    printf("\nUsing variable:\nValue of variable: %d \nAddress of variable: %u", n, &n);
    printf("\n\nUsing pointer variable:\nValue of variable num: %d\nValue of variable num: %d", *p, p);
    return 0;
}