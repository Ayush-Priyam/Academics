#include <iostream>
#include <stdlib.h>
#include <limits.h>
using namespace std;
int findMax(int *a, int n, int *ind)
{
    int max = a[0];
    *ind = 0;
    int i;
    for (i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
            *ind = i;
        }
    }
    return max;
}
int main()
{
    int n, i;
    cout << "Enter number of tasks:";
    cin >> n;
    int num = n;
    int *a = (int *)malloc(n * (sizeof(int)));
    int *b = (int *)malloc(n * (sizeof(int)));
    int *min = (int *)malloc(n * (sizeof(int)));
    int *max = (int *)malloc(n * (sizeof(int)));
    char *minCh = (char *)malloc(n * sizeof(char));
    int minm, minIndex;
    char *maxCh = (char *)malloc(n * sizeof(char));
    int maxm, maxIndex;
    cout << "Executing for MIN-MAX algorithm:\n";
    cout << "Enter the tasks for VM1:";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the tasks for VM2:";
    for (i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    while (num > 0)
    {
        for (i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                min[i] = a[i];
                maxCh[i] = '1';
            }
            else
            {
                min[i] = b[i];
                maxCh[i] = '2';
            }
        } 
        maxm = findMax(min, n, &maxIndex);
        a[maxIndex] = b[maxIndex] = INT_MAX;
        cout << "Executing for VM%c's task %d...\n"
             << maxCh[maxIndex] << maxIndex + 1;
        for (i = 0; i < n; i++)
        {
            if (maxCh[maxIndex] == '1')
            {
                a[i] += maxm;
            }
            else
            {
                b[i] += maxm;
            }
        }
        num = num - 1;
    }
}