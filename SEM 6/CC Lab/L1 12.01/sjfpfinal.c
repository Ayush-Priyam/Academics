#include <stdio.h>
struct pro
{
    int wt, at, bt, tt;
};
void main()
{
    struct pro p[11];
    int temp[10];
    int count = 0, t = 0, short_p;
    int n = 10;
    int t_wt = 0, t_tt = 0;
    float a_wt, a_tt;
    //   printf("enter total number of process : ");
    //   scanf("%d", &n);
    //   printf("Enter arrival time and cpu burst time for the process\n");
    for (int i = 0; i < n; i++)
    {
        // printf("p[%d]: ", i + 1);
        // scanf("%d%d", &p[i].at, &p[i].bt);
        p[i].at = rand() % 20;
        p[i].bt = (rand() % 10) + 1;
        temp[i] = p[i].bt;
    }
    p[10].bt = 10000;
    for (t = 0; count != n; t++)
    {
        short_p = 10;
        for (int i = 0; i < n; i++)
        {
            if (p[i].bt < p[short_p].bt && (p[i].at <= t && p[i].bt > 0))
            {
                short_p = i;
            }
        }
        p[short_p].bt = p[short_p].bt - 1;
        // if any process is completed
        if (p[short_p].bt == 0)
        {
            count++;
            p[short_p].wt = t + 1 - p[short_p].at - temp[short_p];
            p[short_p].tt = t + 1 - p[short_p].at;
        }
    }
    printf("SJF algorithm with arrival time\n");
    printf("Pid\tArrTime\tCPU_burst\twt\ttt\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\t%d\t\t%d\t%d\n", i + 1, p[i].at, temp[i], p[i].wt, p[i].tt);
        t_wt += p[i].wt;
        t_tt += p[i].tt;
        // printf("%d\n",t_wt);
    }
    a_wt = (float)t_wt / (float)n;
    a_tt = (float)t_tt / (float)n;
    printf("\nTotal Waiting Time : %d\n", t_wt);
    printf("Average waiting time : %.2f\n", a_wt);
    printf("\nTotal TT Time : %d\n", t_tt);
    printf("Average TT time : %.2f\n",  a_tt);
}