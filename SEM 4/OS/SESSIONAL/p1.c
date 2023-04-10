#include <stdio.h>
struct process
{
    int at, bt,io,wt, tat;
};
int main()
{
    struct process p[3];
    int i, n, total = 0, x, counter = 0, q;
    int wt = 0, tat = 0, temp[3];
    float awt, atat;
    n = 3;
    q = 10;
    x = n;
    for (i = 0; i < n; i++)
    {
        p[i].at=0;
        p[i].bt=20;
        temp[i] = p[i].bt;
        p[i].io=80;
    }
    printf("PID\tBT\tIO\tTAT\tWT\n------------------------------------");
    for (total = 0, i = 0; x != 0;)
    {
        if (temp[i] <= q && temp[i] > 0)
        {
            total = total + temp[i]+ 40;
            temp[i] = 0;
            counter = 1;
        }
        else if (temp[i] > 0)
        {
            temp[i] = temp[i] - q;
            total = total + q;
        }
        if (temp[i] == 0 && counter == 1)
        {
            x--;
            p[i].tat = total - p[i].at;
            p[i].wt = total - p[i].at - p[i].bt-40;
            printf("\nP[%d]\t%d\t%d\t%d\t%d", i + 1, p[i].bt, p[i].io,total - p[i].at, total - p[i].at - p[i].bt-40);
            wt = wt + total - p[i].at - p[i].bt-80;
            tat = tat + total - p[i].at;
            counter = 0;
        }
        if (i == n - 1)
        {
            i = 0;
        }
        else if (p[i+1].at <= total)
        {
            i++;
        }
        else
        {
            i = 0;
        }
    }
    awt = wt * 1.0 / n;
    atat = tat * 1.0 / n;
    printf("\nAverage Waiting Time:%f", awt);
    printf("\nAvg Turnaround Time:%f", atat);
    return 0;
}