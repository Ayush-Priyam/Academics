#include <stdio.h>
#include <stdbool.h>
#define SIZE 20
int rear = -1;
int front = -1;
struct process
{
    int id;
    int at;
    int bt;
    int remt;
    int wt;
    int compt;
    int tt;
    int rt;
    int tmpr, first;
};

struct process *arr[SIZE];

void push(struct process *prr)
{
    if (rear == SIZE - 1)
        printf("Overflow \n");
    else
    {
        if (front == -1)
            front = 0;

        rear = rear + 1;
        arr[rear] = prr;
    }
}

void pop()
{
    if (front == -1 || front > rear)
    {
        printf("Underflow \n");
        return;
    }
    else
        front = front + 1;
}
bool empty()
{
    if (rear == -1 && front == -1)
        return true;
    else
        return false;
}

sortById(struct process *p, int n)
{
    struct process tmp;
    // sorting the process as per arrival
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (p[j].id > p[j + 1].id)
            {
                tmp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = tmp;
            }
        }
    }
}

bool sortByArrival(struct process *p, int n)
{
    struct process tmp;
    // sorting the process as per arrival
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (p[j].at > p[j + 1].at)
            {
                tmp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = tmp;
            }
        }
    }
}

int main()
{
    int n, qt;
    printf("Enter Total No. of Processes:");
    scanf("%d", &n);
    printf("Enter quantum time: ");
    scanf("%d", &qt);
    struct process p[n];
    printf("\nEnter arrival time and burst time:\n");
    for (int i = 0; i < n; i++)
    {
        p[i].id = i + 1;
        printf("p[%d]: ", p[i].id);
        scanf("%d %d", &p[i].at, &p[i].bt);
        p[i].remt = p[i].bt;
        p[i].first=0;
        p[i].tmpr=0;
    }
    sortByArrival(p, n);

    int toinsert = 0, telapsed = 0, pleft = n, i;
    struct process *toexec = NULL;
    while (pleft)
    {
        // inserting processes into ready queue
        for (i = toinsert; i < n && p[i].at <= telapsed; i++)
        {
            push(p + i);
        }
        // inserting the previous process at the end of the queue
        if (toexec != NULL && toexec->remt > 0)
            push(toexec);
        toinsert = i;
        if (empty())
        {
            telapsed = p[toinsert].at;
        }
        else
        {
            toexec = arr[front];
            pop();
            if (toexec->remt > qt)
            {
                if(toexec->tmpr==0)
                {
                    toexec->first=telapsed;
                    toexec->tmpr++;
                }
                telapsed += qt;
                toexec->remt -= qt;
            }
            else
            {
                if(toexec->tmpr==0)
                {
                    toexec->first=telapsed;
                    toexec->tmpr++;
                }
                telapsed += toexec->remt;
                toexec->compt = telapsed;
                toexec->remt = 0;
                // waiting time= turnaround time - burst time
                toexec->wt = telapsed - toexec->at - toexec->bt;
                toexec->tt = telapsed - toexec->at;
                toexec->rt = toexec->first - toexec->at;
                pleft--;
            }
        }
    }
    sortById(p, n);

    float avgwt = 0, avgtt;
    printf("P\tArrTime\t\tBT\tCompTime\tTAT\tRT\tWT\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\t\t%d\t%d\t\t%d\t%d\t%d\n", p[i].id, p[i].at, p[i].bt, p[i].compt, p[i].tt, p[i].rt, p[i].wt);
        avgwt += p[i].wt;
        avgtt += p[i].tt;
    }
    printf("\nWaiting time: %.0f", avgwt);
    printf("\nTurnaround time: %.0f", avgtt);
    avgwt /= n;
    avgtt /= n;
    printf("\nAverage waiting time: %.2f", avgwt);
    printf("\nAverage turnaround time: %.2f", avgtt);
}