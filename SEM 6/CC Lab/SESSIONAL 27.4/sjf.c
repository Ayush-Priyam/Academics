#include <stdio.h>
#include <stdlib.h>
void main()
{
    int sum = 0;
    int n, i, j, x;
    printf("SJF NP algorithm\n");
    printf("Enter total number of processes: ");
    scanf("%d", &n);
    int pid[n];
    int bt[n];
    int tat[n];
    int wt[n];
    int rt[n];
    for (int i = 0; i < n; i++)
    {
    printf("Enter the burst time of process [%d]: ", i + 1);
        scanf("%d", &bt[i]);
        pid[i] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n - 1  - i; j++)
        {
            if (bt[j] < bt[i])
            {
                x = bt[j];
                bt[j] = bt[i];
                bt[i] = x;
                x= pid[i];
                pid[i]=pid[j];
                pid[j]=x;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum +bt[i];
        tat[i] = sum;
        wt[i] = sum - bt[i];
        rt[i] = wt[i];
    }
    printf("\n\n\nGantt Chart For SJF NP\nPID\tBurst\tTT\tRT\tWT\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\n", pid[i], bt[i], tat[i], rt[i], wt[i]);
    }
}