#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int search(int *a, int s)//function to search a number in digits array
{
    for(int i=0;i<3; i++)
    {
        if(a[i]==s) return 1;
    }
    return 0;
}
int ispresent(int a, int k)//function to check if digits of a are present in k or not
{
    int p1933[3]= {(k/100)%10, (k/10)%10, k%10};//storing digits
    if(k/100==0) p1933[0]=-1;//modifications to digit array for double digit k
    else if(k/10==0) p1933[1]=-1;
    if(a/10==0&& search(p1933,a))//checking for a single digit number
    {
        return 1;
    }
    else if(search(p1933, a/10)&&search(p1933,a%10))//checking for a double digit no.
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n =5;
    //scanf("%d",&n);
    int a[n];
    srand(time(0));//randomising values every time we run the program
    for (int i = 0; i < n; i++) //assigning random values to the array
    {
        a[i]=rand()%100;
        //scanf("%d", &a[i]);
    }
    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", a[i]);
    }
    printf("\n");
    int k;
    for (int i = 0; i < n; i++)
    {   k=0;
        if(i>0) k=a[i-1];
        while(1)
        {
            //printf("%d", k);
            if(ispresent(a[i],k))//checking if digits in ith position number are in k or not
            {
                a[i]=k;
                break;
            }
            k++;
        }
    }
    printf("\nSorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", a[i]);
    }
}
/*ONE FLAW in this program. 
lets say we have to sort 2, 9, 7, 42, 11
it will sort this arrray to 2, 9, 17, 24, 31. 
not that 11 changes to 31. this happens because the digit 1 (in 11) is present in 31. 
so we can either consider this as a flaw or a feature.
in general, same thing happens with *numbers with repeated digits*
*/
