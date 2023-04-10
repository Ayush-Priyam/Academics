#include <stdio.h>
#include <time.h>
struct proc
{
    int pid, at, cpub, tat, rt, wt;
};
int main()
{
    float sum = 0.0;
    int totalWT = 0, totalTT = 0;
    float avgWT = 0.0, avgTT = 0.0;
    int ideal = 0, tideal = 0;
    struct proc p[10], temp;
    int total = 10;
    // printf("Enter total number of process: ");
    // scanf("%d", &total);
    // Taking cpu burst time and arrival time as input:
    int arrt[] = {0, 1, 2, 3, 6, 4, 8, 7, 10, 9};
    int cpu[] = {2, 6, 4, 9, 12, 7, 3, 1, 5, 4};
    time_t start = clock();
    // printf("\nEnter Arrival and burst time for the process\n");
    for (int i = 0; i < total; i++)
    {
        // printf("p[%d]: ", i + 1);
        // scanf("%d %d", &p[i].at, &p[i].cpub);
        p[i].at = arrt[i];
        p[i].cpub = cpu[i];
        p[i].pid = i + 1;
    }
    for (int i = 0; i < total; i++)
    {
        // printf("p[%d]: ",i+1);
        // scanf("%d %d",&p[i].at,&p[i].bt);
        p[i].at = 1 + rand() % 10;
        p[i].cpub = rand() % 10 + 1;
        p[i].pid = i + 1;
    }
    // sorting the process as per arrival
    for (int i = 0; i < total - 1; i++)
    {
        for (int j = 0; j < total - i - 1; j++)
        {
            if (p[j].at > p[j + 1].at)
            {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }

    // calculate TT, WT
    for (int i = 0; i < total; i++)
    {
        if (sum < p[i].at && p[i].at > 0)
        {
            sum = p[i].at;
        }
        sum += p[i].cpub;
        p[i].tat = sum - p[i].at;
        p[i].wt = p[i].tat - p[i].cpub;
        totalTT += p[i].tat;
        totalWT += p[i].wt;
    }
    // calculate RT
    int s = p[0].cpub + p[0].at;
    p[0].rt = 0;
    for (int i = 1; i < total; i++)
    {
        if (s < p[i].at && p[i].at > 0)
            s = p[i].at;
        p[i].rt = s - p[i].at;
        s += p[i].cpub;
    }
    ideal = 0;
    sum = 0;
    // printing values
    printf("PID\tArr\tCPUB\tTT\tRT\t WT\n");
    for (int i = 0; i < total; i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\t%d\n", p[i].pid, p[i].at, p[i].cpub, p[i].tat, p[i].rt, p[i].wt);
    }
    printf("\nTotal waiting time: %d\n", totalWT);
    printf("Total TT time: %d\n", totalTT);
    avgWT = (float)totalWT / total;
    avgTT = (float)totalTT / total;
    printf("Average waiting time: %.2f\n", avgWT);
    printf("Average TT: %.2f\n", avgTT);
}
