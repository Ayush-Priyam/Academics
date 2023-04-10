#include <stdio.h>
#include <math.h>
struct pro
{
    int pid, at, bt, tt, rt, wt;
};
void main()
{
    float sum = 0.0;
    float totalWT = 0.0;
    float totalTT = 0. 0;
    float avgWT = 0.0, avgTT = 0.0;
    int ideal = 0, tideal = 0;
    struct pro p[100], temp;
    int n = 10;
    printf("FCFS algorithm with arrival time\n");
    // printf("Enter total number of process: ");
    // scanf("%d", &n);
    //  Taking input
    //printf("\nEnter arrivalTime and burst time for the process\n");
    for (int i = 0; i < n; i++)
    {
        // printf("p[%d]: ",i+1);
        // scanf("%d %d",&p[i].at,&p[i].bt);
        p[i].at = 1+ rand() % 10;
        p[i].bt = rand() % 10+1;
        p[i].pid = i + 1;
    }
    // int arrt[] = {0, 1, 2, 3, 6, 4, 8, 7, 10, 9};
    // int cpu[] = {2, 6, 4, 9, 12, 7, 3, 1, 5, 4};
    // // printf("\nEnter Arrival and burst time for the process\n");
    // for(int i = 0; i < 10; i++)
    // {
    //     // printf("p[%d]: ", i + 1);
    //     // scanf("%d %d", &p[i].at, &p[i].cpub);
    //     p[i].at = arrt[i];
    //     p[i].bt = cpu[i];
    //     p[i].pid = i + 1;
    // }
    printf("INITIAL PROCESSES\nPID\tArr\tCPUBT\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\t%d\n", p[i].pid, p[i].at, p[i].bt);
    }
    // sorting the process as per arrival
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (p[j].at > p[j + 1].at)
            {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
    // TT
    for (int i = 0; i < n; i++)
    {
        // if (p[i].at + p[i].bt < p[i + 1].at)
        // {
        //     ideal = p[i + 1].at - (p[i].at + p[i].bt);
        //     tideal += ideal;
        // }
        if (sum < p[i].at && p[i].at > 0)
        {
            sum = p[i].at;
        }
        sum = sum + p[i].bt;
        p[i].tt = sum-p[i].at;
        p[i].rt = p[i].tt - p[i].bt;
        p[i].wt = p[i].rt;
        totalTT = totalTT + p[i].tt;
        totalWT = totalWT + p[i].wt;
    }
    //ideal = 0;
    //sum = 0;
    printf("\n\n\nPID\tArr\tCPUB\tTT\tRT\tWT\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\t%d\n", p[i].pid, p[i].at, p[i].bt, p[i].tt, p[i].rt, p[i].wt);
    }
    printf("\nTotal waiting time: %d\n", totalWT);
    printf("Total TT time: %d\n", totalTT);
    avgWT = totalWT*1.0 / n;
    avgTT = totalTT*1.0 / n;
    printf("Average waiting time: %f\n", avgWT);
    printf("Average TT %f\n", avgTT);
}