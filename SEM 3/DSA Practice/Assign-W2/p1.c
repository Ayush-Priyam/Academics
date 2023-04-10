/*Pointer
1. It stores the memorry location of any variable
2. Pointer variable can be assigned a value 
*/
/*
Array
1. It a collection of variables of the same datatype under a single variable name
2. array variable cannot be assigned a value, whereas array[0], array[1], etc can be reassigned
*/
#include <stdio.h>
void diff1()
{
    int n=10;
    int arr[5]={1,2,3,4,5};
    int *p=&n;
    printf("%p,%p\n\n",p,arr);
}
void diff2()
{
    int n = 10, k=15;
    int arr[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {10, 20, 30, 40, 50};
    int *p = &n;
    printf("%p, %p, %d, %d\n", p, arr, arr[1], arr[2]);
    p=&k;
    //arr = arr2; //error- expression must be a modifiable lvalue
    arr[1]= 15;//no error
    arr[2]=19;
    printf("%p, %p, %d, %d", p, arr, arr[1],arr[2]);
}
int main()
{
    diff1();
    diff2();
}