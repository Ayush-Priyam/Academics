/*5. In a one dimensional array, user gives a certain range of index with shifting value.
You need to right shift and rotate those range of values based on the given shifting value.
(consider the starting index is 0)*/
#include<stdio.h> 
void f1(int *, int, int);
void print(int*);
int main()
{
    int n,r,l,u,s;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the lower and upper limit:\n");
    scanf("%d%d", &l,&u);
    r=u-l;
    printf("Enter the shift:\n");
    scanf("%d", &s);
    f1(a+l,r+1,s%r);
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", a[i]);
    }
}
void f1(int* b, int r, int s)
{
    for(int k=1; k<=s; k++)
    {
        int x= b[r-1];
        for (int i = r-1; i>=1; i--)
        {
            b[i] = b[i-1];
        }
        b[0]= x;
    }
}