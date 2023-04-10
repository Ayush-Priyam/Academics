#include <stdio.h>
#include <stdbool.h>
#define SIZE 20
int Rear = -1;
int Front = -1;
struct process
{
    int id;
    int at;
    int bt;
    int remaining_time;
    int waiting_time;
    int completion_time;
    int tt;
    int response_time;
    int tmpr, first;
};

struct process *arr[SIZE];

void push(struct process *insert_item)
{
    if (Rear == SIZE - 1)
        printf("Overflow \n");
    else
    {
        if (Front == -1)
            Front = 0;

        Rear = Rear + 1;
        arr[Rear] = insert_item;
    }
}

void pop()
{
    if (Front == -1 || Front > Rear)
    {
        printf("Underflow \n");
        return;
    }
    else
        Front = Front + 1;
}
bool empty()
{
    if (Rear == -1 && Front == -1)
        return true;
    else
        return false;
}

sortById(struct process *p, int n)
{
    struct process tmp;
    // return (a->id) < (b->id);
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
    // return (a->at) < (b->at);
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
    int n, quantum;
    printf("Enter Total Number of Processes:");
    scanf("%d", &n);
    printf("Enter quantum time: ");
    scanf("%d", &quantum);

    // cin >> n >> quantum;
    // scanf("%d %d", &n, &quantum);
    // process p[n];
    struct process p[n];
    printf("\nEnter arrival time and burst time for the process\n");
    for (int i = 0; i < n; i++)
    {
        p[i].id = i + 1;
        printf("p[%d]: ", p[i].id);
        // cin >> (p[i].at) >> (p[i].bt);
        scanf("%d %d", &p[i].at, &p[i].bt);
        p[i].remaining_time = p[i].bt;
        p[i].first=0;
        p[i].tmpr=0;
    }
    // sort(p, p + n, sortByArrival);
    sortByArrival(p, n);

    int toBeInserted = 0, timeElapsed = 0, processLeft = n, i;
    struct process *processToExecute = NULL;
    while (processLeft)
    {
        // inserting processes into ready queue
        for (i = toBeInserted; i < n && p[i].at <= timeElapsed; i++)
        {
            push(p + i);
        }
        // inserting the previous process at the end of the queue
        if (processToExecute != NULL && processToExecute->remaining_time > 0)
            push(processToExecute);
        toBeInserted = i;
        if (empty())
        {
            timeElapsed = p[toBeInserted].at;
        }
        else
        {
            processToExecute = arr[Front];
            pop();
            if (processToExecute->remaining_time > quantum)
            {
                if(processToExecute->tmpr==0)
                {
                    processToExecute->first=timeElapsed;
                    processToExecute->tmpr++;
                }
                timeElapsed += quantum;
                processToExecute->remaining_time -= quantum;
            }
            else
            {
                if(processToExecute->tmpr==0)
                {
                    processToExecute->first=timeElapsed;
                    processToExecute->tmpr++;
                }
                timeElapsed += processToExecute->remaining_time;
                processToExecute->completion_time = timeElapsed;
                processToExecute->remaining_time = 0;
                // waiting time= turnaround time - burst time
                processToExecute->waiting_time = timeElapsed - processToExecute->at - processToExecute->bt;
                processToExecute->tt = timeElapsed - processToExecute->at;
                processToExecute->response_time = processToExecute->first - processToExecute->at;
                processLeft--;
            }
        }
    }
    // sort(p, p + n, sortById);
    // sortById(p, p + n);
    sortById(p, n);

    int avgWaitingTime = 0;
    printf("    Process \t Arrival Time \t Burst Time \t Completion Time\tTAT \t RT \t WT\n\n");
    for (int i = 0; i < n; i++)
    {

        // cout << "\t" << p[i].id << "\t\t" << p[i].at << "\t\t" << p[i].bt << "\t\t" << p[i].waiting_time << "\t\t" << p[i].completion_time << endl;
        printf("\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t%d\t%d\n", p[i].id, p[i].at, p[i].bt, p[i].completion_time, p[i].tt, p[i].response_time, p[i].waiting_time);
        avgWaitingTime += p[i].waiting_time;
    }
    avgWaitingTime /= n;

    // cout << "\nAverage waiting time: " << avgWaitingTime;
    printf("\nAverage waiting time: %d", avgWaitingTime);
}