/*
Pointer vs Array
1. Pointer stores the memory location of a variable while an array is a collection of same datatype variables
2. Pointer variable can be assigned a value whereas an array variable cannot be assigned
*/
int main()
{
    int a = 10, b = 15;
    int ar[3] = {5, 9, 14};
    int arr[3] = {20, 21, 12};
    int *p = &a;//difference 1
    printf("%p, %p, %d\n", p, arr, arr[0]);
    p = &b;
    ar = arr;//this gives error- difference 2
    arr[0] = 15;
    printf("%p, %p, %d", p, arr, arr[0]);
}