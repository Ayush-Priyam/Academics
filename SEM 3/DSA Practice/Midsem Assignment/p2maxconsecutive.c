#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n1933 = 10, max, pos1933;
    //scanf("%d", &n1933);
    int a[n1933];
    srand(time(0));//randomising values every time we run the program
    for (int i = 0; i < n1933; i++) //assigning random values to the array
    {
        //scanf("%d",&a[i]);
       a[i] = rand() % 10;
    }
    /*LOGIC: choosing a position and checking for maximum consecutive elements
    then storing it in max, updating max if a more consecutive group is found */
    for (int i = 0; i < n1933-1; i++)
    {
        int c=1;
        for (int j = i+1; j < n1933; j++)
        {
            if(a[j-1]+1==a[j])//checking for consecutiveness
            {
                c++;
            }
            else break;
        }
        if(c>max)
        {
            max=c;//updating maximum no of consecutives
            pos1933=i;//storing the position from where the max consecutives start.
        }
    }
    printf("\n");
    printf("Original array: ");
    for (int i = 0; i < n1933; i++)
    {
        printf("%d, ", a[i]);
    }
    if(max==1)//if there are no consecutives
    {
        printf("No consecutive elements found");
        return 0;
    }
    printf("\nMaximum consecutive elements= %d\nConsecutive elements: ", max);
    for (int i = pos1933; i < pos1933+max; i++)
    {
        printf("%d, ", a[i]);
    }
}