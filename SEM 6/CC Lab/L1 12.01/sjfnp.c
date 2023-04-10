#include <stdio.h>
#include <time.h>
#include <stdlib.h>
struct pro
{
    int b, pid, wt, tt, rt;
};
void main()
{
    
    struct pro p[10], temp;
    int sum = 0, totalwt = 0, t_total = 0;
    float w_avg = 0.0, t_avg = 0.0;
    printf("SJF NP algorithm\n");
    int n=10;
    // printf("Enter total number of processes: ");
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the b time of process p[%d]: ", i + 1);
    //     scanf("%d", &p[i].b);
    //     p[i].pid = i + 1;
    // }
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        p[i].b = rand() % 15+1;
        p[i].pid = i + 1;
    }
    printf("INITIAL PROCESSES\nPID\tCPUBT\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\n", p[i].pid, p[i].b);
    }
    // sorting as per b time:
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (p[j].b > p[j + 1].b)
            {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        p[i].wt = sum;
        sum = sum + p[i].b;
        p[i].tt = sum;
        p[i].rt = p[i].wt;
        totalwt += p[i].wt;
        t_total += p[i].tt;
    }
    printf("\n\n\nGantt Chart For SJF NP\nPID\tBurst\tTT\tRT\tWT\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\n", p[i].pid, p[i].b, p[i].tt, p[i].rt, p[i].wt);
    }
    printf("Total waitng time: %d\n", totalwt);
    printf("Totao Turnaround Time : %d\n", t_total);
    w_avg = (float)totalwt / n;
    t_avg = (float)t_total / n;
    printf("Average waiting Time: %.3f\n", w_avg);
    printf("Average Turnaround Time: %.3f\n", t_avg);
}