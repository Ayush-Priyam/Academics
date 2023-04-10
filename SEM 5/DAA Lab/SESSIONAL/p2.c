#include <stdio.h>
#include <stdlib.h>
int c;
void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}
void GFS(int n, int s[n], int f[n], int sel[n])
{
    int j = 0;
    sel[0]=1;
    c++;
    for (int i = 1; i < n; i++)
    {
        if (s[i] >= f[j])
        {
            c++;
            sel[i] = 1;
            j = i;
        }
    }
}
int main()
{
    int n=9;
    int s[9]= {0,10,20,30,40,50,60,70,80};
    int f[9]= {5,40,25,40,50,65,72,78,95 };
    int sel[9]={0};
    char a[9]={'I','C', 'D', 'A', 'H', 'G', 'F', 'E', 'B'};
    printf("\nItem\tStart\tFIN\tPREP?\n");
    for (int i = 0; i < n; i++)
    {
        printf(" %c\t%d\t %d\tNO\n", a[i], s[i], f[i] );
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (f[i] > f[j])
            {
                swap(&s[i], &s[j]);
                swap(&f[i], &f[j]);
                //swap(&a[i], &a[j]);
                char z= a[i];
                a[i]=a[j];
                a[j]=z;
            }
        }
    }
    // printf("\nItem\tStart\tFIN\tPREP?\n");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%c\t%d\t %d\t%d\n", a[i], s[i], f[i], sel[i]);
    // }
    GFS(n, s, f, sel);
    printf("\nItem\tStart\tFIN\tPREP?\n");
    for (int i = 0; i < n; i++)
    {
        char z[3];
        if (sel[i] == 1)
            printf(" %c\t%d\t %d\t YES\n", a[i], s[i], f[i]);
        else 
            printf(" %c\t%d\t %d\t -\n", a[i], s[i], f[i]);
    }

    printf("\nMax no of food prepared: %d", c);
}