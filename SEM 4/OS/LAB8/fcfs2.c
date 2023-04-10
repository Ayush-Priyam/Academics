#include<stdio.h> 
#include <math.h>
struct pro
{
    int pid, at, bt, tt, rt, wt;
};
void main()
{
    float sum = 0.0;
    int totalWT = 0, totalTT = 0;
    float avgWT = 0.0, avgTT = 0.0;
    int ideal = 0, tideal = 0;
    struct pro p[100], temp;
    int n=10;
    printf("FCFS algorithm with arrival time\n");
    //printf("Enter total number of process: ");
    //scanf("%d", &n);
    // Taking input
    printf("\nEnter arrivalTime and burst time for the process\n"); 
    for(int i=0;i<n;i++)
    { 
        //printf("p[%d]: ",i+1); 
        //scanf("%d %d",&p[i].at,&p[i].bt); 
        p[i].at= rand()%(5*(i+1));
        p[i].bt= rand()%15;
        p[i].pid=i+1;
    }
    printf("PID\tArr\tCPUB\tTT\tRT\tWT\n ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\t%d\n", p[i].pid, p[i].at, p[i].bt, p[i].tt, p[i].rt, p[i].wt);
    }
    // sorting the process as per arrival 
    for(int i=0;i<n-1;i++)
    { 
        for(int j=0;j<n-i-1;j++)
        {
            if (p[j].at > p[j + 1].at)
            { 
                temp=p[j]; 
                p[j]=p[j+1];
                p[j + 1] = temp;
            }
        }
    }
    //TT
    for(int i=0;i<n;i++)
    {
        if (p[i].at + p[i].bt < p[i + 1].at)
        {
            ideal = p[i + 1].at - (p[i].at + p[i].bt);
            tideal+=ideal;
        }
        sum = sum + p[i].bt;
        p[i].tt = sum;
        p[i].rt = p[i].tt - p[i].bt;
        p[i].wt = p[i].rt;
        totalTT = totalTT + p[i].tt;
        totalWT = totalWT + p[i].wt;
    }
    ideal = 0;
    sum = 0;
    printf("\n\n\nPID\tArr\tCPUB\tTT\tRT\tWT\n ");
    for(int i=0;i<n;i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\t%d\n", p[i].pid, p[i].at, p[i].bt, p[i].tt, p[i].rt, p[i].wt);
    }
    printf("\nTotal waiting time: %d\n", totalWT);
    printf("Total TT time: %d\n", totalTT);
    avgWT = totalWT / n;
    avgTT = totalTT / n;
    printf("Average waiting time: %f\n", avgWT);
    printf("Average TT %f\n", avgTT);
}