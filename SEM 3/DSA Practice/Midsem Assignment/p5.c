#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rev(int n)//reversing 2 digit nos
{
    int rn=0;
    while(n!=0)
    {
        rn=rn*10+rn%10;
        n/=10;
    }
}
int main()
{
    int n= 10;
    int a1933[n];
    srand(time(0));//randomising values every time we run the program
    for(int i=0;i<n;i++)//assigning random values to the array
    {
        //a1933[i]=rand()%100;
        scanf("%d",&a1933[i]);
    }
    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", a1933[i]);
    }
    printf("\n");
    for(int i=1;i<n;i++)//sorting in a way that the digits dont change, so adding 10 is the only way
    {//minimizing output so adding 10 everytime, else x10 was also possible to retain the digits and the position
        int t=a1933[i];
        while(a1933[i]<a1933[i-1])
        {   
            a1933[i]=a1933[i]+10;
        }
        if(rev(t)<a1933[i]&&rev(t)>a1933[i-1])
        {
            a1933[i]=rev(t);
        }
    }
    printf("\nSorted array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d, ", a1933[i]);
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int search(int *a, int s)
{
    for (int i = 0; i < 3; i++)
    {
        if (a[i] == s)
            return 1;
    }
    return 0;
}
int ispresent(int a, int k)
{
    int p[3] = {(k / 100) % 10, (k / 10) % 10, k % 10};
    //printf("%d, %d\n", a % 10, a / 10);
    //printf("%d, %d, %d \n", k / 100, k / 10, k % 10);
    //printf("%d %d\n", search(p, a % 10), search(p, a / 10));
    if (a / 10 == 0 && search(p, a))
    {
        return 1;
    }
    else if (search(p, a / 10) && search(p, a % 10))
    {
        return 1;
    }
    return 0;
}
int main()
{
    printf("%d\n", ispresent(75, 157));
    int n = 12;
    int a1933[n];
    srand(time(0));             //randomising values every time we run the program
    for (int i = 0; i < n; i++) //assigning random values to the array
    {
        //a1933[i]=rand()%100;
        scanf("%d", &a1933[i]);
    }
    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", a1933[i]);
    }
    printf("\n");
    int k = 0;
    for (int i = 1; i < n; i++)
    {
        k = a1933[i - 1];
        while (a1933[i] < a1933[i - 1])
        {
            printf("%d ", k);
            if (ispresent(a1933[i], k))
            {
                printf("NOfound%d", k);
                a1933[i] = k;
                break;
            }
            k++;
        }
    }
    printf("\nSorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", a1933[i]);
    }
}
