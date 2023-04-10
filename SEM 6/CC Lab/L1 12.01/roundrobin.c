#include <stdio.h>
#include <conio.h>
void main()
{
    int i, n=10, sum = 0, count = 0, y, quant, wt = 0, tat = 0, at[10], bt[10], temp[10];
    float avg_wt, avg_tat;
    // printf(" Total number of process in the system: ");
    // scanf("%d", &n);
    y = n;
    //printf("\n Enter the Arrival and Burst time of the Process\n");
    for (i = 0; i < n; i++)
    {
        // printf("P[%d]: ", i + 1);
        // scanf("%d", &at[i]);
        // scanf("%d", &bt[i]);
        at[i] = + rand() % (2 * (i + 1));
        bt[i] = rand() % 15;
        temp[i] = bt[i];
    } 
    printf("INITIAL PROCESSES\nPID\tArr\tCPUBT\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\t%d\n", i+1,at[i], bt[i]);
    }
    // printf("Enter the Quantum Time for the process: \t");
    // scanf("%d", &quant);
    quant=3;
    printf("\n PID\tBT\tTAT\tWT");
    for (sum = 0, i = 0; y != 0;)
    {
        if (temp[i] <= quant && temp[i] > 0)
        {
            sum = sum + temp[i];
            temp[i] = 0;
            count = 1;
        }
        else if (temp[i] > 0)
        {
            temp[i] = temp[i] - quant;
            sum = sum + quant;
        }
        if (temp[i] == 0 && count == 1)
        {
            y--;
            printf("\nP[%d]\t %d\t%d\t%d", i + 1, bt[i], sum - at[i], sum - at[i] - bt[i]);
            wt = wt + sum - at[i] - bt[i];
            tat = tat + sum - at[i];
            count = 0;
        }
        if (i == n - 1)
        {
            i = 0;
        }
        else if (at[i + 1] <= sum)
        {
            i++;
        }
        else
        {
            i = 0;
        }
    }
    avg_wt = wt * 1.0 / n;
    avg_tat = tat * 1.0 / n;
    printf("\n Average Turn Around Time: \t%f", avg_wt);
    printf("\n Average Waiting Time: \t%f", avg_tat);
    getch();
}