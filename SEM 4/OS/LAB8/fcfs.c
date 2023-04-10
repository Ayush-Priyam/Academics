#include <stdio.h>
typedef struct pro
{
    int bt;
    int wt;
    int tat;
}pro;

void findWaitingTime(pro p[], int n)
{
    
    p[0].wt = 0;// waiting time for first process is 0
    for (int i = 1; i < n; i++)
        p[i].wt= p[i].bt + p[i].wt;
}
void findTurnAroundTime(pro p[], int n)
{
    // calculating turnaround time by adding
    // bt[i] + wt[i]
    for (int i = 0; i < n; i++)
        p[i].tat = p[i].bt + p[i].wt;
}

void findavgTime(pro p[], int n)
{
    int total_wt = 0, total_tat = 0;
    findWaitingTime(p, n);
    findTurnAroundTime(p, n);
    printf("Pr.No.\tCPUB\tWT\tTAT\n");
    for (int i = 0; i < n; i++)
    {
        total_wt = total_wt + p[i].wt;
        total_tat = total_tat + p[i].tat;
        printf("%d", (i + 1));
        printf("\t%d", p[i].bt);
        printf("\t%d", p[i].wt);
        printf("\t%d\n", p[i].tat);
    }
    int s = (float)total_wt / (float)n;
    int t = (float)total_tat / (float)n;
    printf("Average waiting time = %d\n", s);
    printf("Average turn around time = %d\n", t);
}

int main()
{
    int n=3;
    pro p[3];
    p[0].bt=10;
    p[1].bt =5;
    p[2].bt =8;
    for (int i = 0; i < n; i++)
    {
        p[i].wt = 0;
        p[i].tat = 0;
    }
    findavgTime(p, n);
    return 0;
}
