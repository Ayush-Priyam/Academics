/*In a railway station, there are 3 rest rooms. In each rest room, only one passenger is
allowed to take rest at a time. Write a solution using semaphore to synchronize among
the passenger to avoid the race condition for accessing the rooms.*/
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>
#define n 100               // assuming 100 passengers
int r_state[3] = {0, 0, 0}; //) for empty, 1  for filled
sem_t p[n];                 // semaphores for passenger
sem_t mutex;
int alloc_r[n] = {-1}; // room allocated to a passenger
int a[n] = {-1};
void Rstatus(int i)
{
    int r = -1;
    if (r_state[0] == 0)
    {
        r = 0;
    }
    else if (r_state[1] == 0)
    {
        r = 1;
    }
    else if (r_state[2] == 0)
    {
        r = 2;
    }
    // else{
    //     printf("Cant allocate room to passenger %d, sent them to waiting room \n", i);
    // }
    // if any room is empty, then allocating it to the ith passenger
    if (r != -1 && a[i] == -1)
    {
        alloc_r[i] = r;
        a[i] = r;
        printf("Room %d allocated to passenger %d\n", r, i);
        r_state[r] = 1;
        sem_post(&p[i]);
    }
}
void occupy(int i)
{
    sem_wait(&mutex);
    Rstatus(i);
    sem_post(&mutex);
    sem_wait(&p[i]);
}
void vacant(int i)
{
    sem_wait(&mutex);
    printf("\tPassenger %d is leaving, Room %d is empty now\n", i, alloc_r[i]);
    r_state[alloc_r[i]] = 0;
    alloc_r[i] = -1;
    int x = 1;
    for (int x = 1; x < n; x++) // checking room for waiting statuses
    {
        if (a[x] == -1)
        {
            // printf("%d hasnt been allocated\n", x);
            Rstatus(x);
            break;
        }
    }
    // Rstatus(i+1);
    sem_post(&mutex);
}
void *alloc_routine(void *x)
{
    while (1)
    {
        int i = (*(int *)x);
        // printf("%d\n", i);
        occupy(i);
        sleep(5); // taking rest
        vacant(i);
    }
}
int main()
{
    for (int i = 0; i < n; i++)
    {
        alloc_r[i] = -1;
        a[i] = -1;
    }
    printf("Synchronizing 3 rooms among %d passengers, by FCFS basis\n", n);
    sem_init(&mutex, 0, 1);
    for (int i = 0; i < n; i++)
    {
        sem_init(&p[i], 0, 0);
    }
    pthread_t a[n];
    for (int i = 0; i < n; i++)
    {
        pthread_create(&a[i], NULL, alloc_routine, ((void *)&i));
        sleep(1);
    }
    sleep(1000);
    return 0;
}