/*1. write a menu driven program as given below, to sort an array of n integers in ascending order by
insertion sort algorithm and determine the time required (in terms of step/frequency count) to
sort the elements. Repeat the experiment for different values of n and different nature of data
(i.e.apply insertion sort algorithm on the data of array that are already sorted, reversely sorted
and random data). Finally plot a graph of the time taken versus n for each type of data. The
elements can be read from a file or can be generated using the random number generator.
0. Quit
1. n Random numbers=>Array
2. Display
3. Sort the Array In Ascending Order
4. Sort the Array in Descending Order
5. Time Complexity to sort ascending of random data
6. Time Complexity to sort ascending of data already sorted 1n ascending order
/. Time Complexity to sort ascending of data already sorted 1n descending order
8. Time Complexity to sort ascending of data for a7] Cases (Data
Ascending, Data 71n Descending & Random Data) in Tabular
form for values n=5000 to 50000, step=5000*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
long int isort(int a[], int n)
{
    long int c=0;
    int i, key, j;
    c++;// for initializations
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        c+=4;// for true for + prev 2 lines
        while (j >= 0 && a[j] > key)
        {
            c += 2;// for true while and next 2 lines
            a[j + 1] = a[j];
            j--;
        }
        c++;// for false while +next line
        a[j + 1] = key;
    }
    c++;
    //printf("time= %d\n", c);
    return c;
}
// int main()
// {
//     int n;
//     srand(time(0));
//     printf("Enter n: ");
//     scanf("%d", &n);
//     int a[n];
//     for(int i=0; i<n; i++)
//     {
//         a[i]= rand()%100;
//         printf("%d, ", a[i]);
//     }
//     printf("\n");
//     int c=isort(a,n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d, ", a[i]);
//         a[i] = rand() % 100;
//     }
// }
void init(int *a, int n)
{
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        a[i] = rand()%1000000;
        //printf("%d, ", a[i]);
    }
}
void display(int *a, int n)
{
    printf("Array:  ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", a[i]);
    }
    printf("\n");
}
void dsort(int *a, int n)
{
    int c = 0, i, key, j;
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] <  key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
    // printf("time= %d\n", c);
    //return c;
}

void dis(int n)
{
    int ar[n];
    init(ar, n);
    int asa[n];
    init(asa, n);
    isort(asa, n);
    //display(ar, n);
    int rsa[n];
    init(rsa, n);
    dsort(rsa, n);
    long int a= isort(ar, n);
    long int b= isort(asa, n);
    long int c= isort(rsa, n);
    printf("%d\t%ld\t %ld\t %ld\n", n , a, b, c);
}
int main()
{
    int n,x=1,cc;
    printf("Enter n: ");
    scanf("%d", &n);
    int a[n], b[n], c[n], d[n];
    while(x!=0)
    {
        printf("Enter Choice: 0 Quit, 1 Initialize, 2 display, 3 ASCSort, 4 DESort, 5 T(n) random, 6 T(n)alrsorted,7 T(n)alr des sort, 8 Tabular Form\n");
        scanf("%d", &x);
        switch(x)
        {
            case 0: 
                return 0; 
            case 1:
                init(a,n);
                break;
            case 2: 
                display(a, n);
                break;
            case 3:
                isort(a, n);
                //display(a, n);
                break;
            case 4:
                dsort(a,n);
                //display(a, n);
                //display(b,n);
                break;
            case 5:
                init(b, n);
                cc= isort(b, n);
                printf("T(n) for random sort= %d\n", cc);
                break;
            case 6:
                init(c, n);
                isort(c, n);
                cc = isort(c, n);
                printf("T(n) for already sorted= %d\n", cc);
                break;
            case 7:
            init(d, n);
                dsort(d,n);
                cc= isort(d,n);
                printf("T(n) for des sorted= %d\n", cc);
                break;
            case 8:
                printf("N\t\tRA\t\tSOR\tREVS\n--------------------------------------------\n");
                //dis(5000);
                for (int i = 5000; i <= 50000; i += 5000)
                {
                    dis(i);
                }
                break;
        }
    }
}
