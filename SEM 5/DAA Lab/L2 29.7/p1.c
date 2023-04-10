/* White a program to test whether a number n, entered through keyboard is prime or
not by using different algorithms you know for atleast 10 inputs and note down the time
complexity by step’frequency count method for each algorithm & for each input.
Finally make a comparision of time complexities found for different inputs. plot an
appropniate graph & decide which algothm is faster.*/

#include <stdio.h>
#include <math.h>

int prm1(int n)
{
    int i,c=2, fl=0;//skipped counting the steps of initialisations
    for (i = 2; i < n; i++)
    {
        c+=2;//for for and if
        if (n % i == 0)
            {
                c = c + 3;// for this if block + return statement at the end
                fl=1; 
                break;
            }
    }
    c+=2;//for false condition of for +  next if statement 
    printf("%d\t", c);
    if (fl == 1)
        return 0;
    return 1;
}
int prm2(int n)
{
    int i, c = 2, fl=0;
    for (i = 2; i <= n / 2; i++)
    {
        c+=2;
        if (n % i == 0)
        {
            c = c + 3;
            fl = 1;
            break;
        }
        
    }
    c+=2;
    printf("%d\t", c);
    if (fl == 1)
        return 0;
    return 1;
}
int prm_sq(int n)
{
    int i, c = 2, fl=0;
    for (i = 2; i <= sqrt(n); i++)
    {
        c+=2;
        if (n % i == 0)
        {
            c=c+3;
            fl = 1;
            break;
        }
    }
    c+=2;
    printf("%d\t", c);
    if(fl==1)
        return 0;
    return 1;
}
int main()
{
    int n=10;
    printf("\nNumber\tAlgo1\tAlgo2\tAlgo3\t  Status\n-------------------------------------------\n");
    int a[] = {163, 67, 131, 49, 403, 56, 121, 241, 97, 221};// choosing mixed nos
    for(int i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
        prm1(a[i]);
        prm2(a[i]);
        //printf("  %d\t", prm_sq(a[i]));
        int x= prm_sq(a[i]);
        if (x == 0)
        {
            printf("  Not Prime");
        }
        else printf("  Prime");
        printf("\n");
    }
}