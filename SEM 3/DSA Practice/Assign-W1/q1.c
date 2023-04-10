//Write C program that includes call by value and call by reference functionality
#include <stdio.h>
void f1(int*);
void f2(int);

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    f2(a);
    printf("\nNew Value= %d", a);
    f1(&a);
    printf("\nNew Value= %d", a);
}
void f1(int *b)//call by reference
{
    printf("\nChanging value in a funcion via call by reference");
    *b=*b+1;
}
void f2(int b)//call by value
{
    printf("\nChanging value in funcion via call by value");
    b = b + 1;
}
