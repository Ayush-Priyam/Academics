/*In a railway station, there are 3 rest rooms. In each rest room, only one passenger is 
allowed to take rest at a time. Write a solution using semaphore to synchronize among
the passenger to avoid the race condition for accessing the rooms.*/
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>
#define n 20 //assuming 10 passengers
int e=0;
int r_state[3] = {0}; //) for empty, 1  for filled
sem_t p[n]; // semaphores for passenger
sem_t mutex;
int alloc_r[n] = {-1};//room allocated to a passenger
int a[n]={-1};

void check_room_status(int i)
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
    //     printf("Cant allocate room to passenger %d\n", i);
    // }
    // if any room is empty, then allocating it to the ith passenger
    if (r != -1)
    {
        alloc_r[i] = r;
        a[i]=r;
        //e++;
        printf("Room %d allocated to passenger %d\n",r, i);
        r_state[r] = 1;
        sem_post(&p[i]);
    }
}
void occupy_room(int i)
{
    sem_wait(&mutex);
    check_room_status(i);
    sem_post(&mutex);
    sem_wait(&p[i]);
}
void vacant_room(int i)
{
    sem_wait(&mutex);
    printf("Passenger %d is leaving, Room %d is empty now\n", i, alloc_r[i]);
    r_state[alloc_r[i]] = 0;
    alloc_r[i] = -1;
    //for(int j=e; j<n; j++)
    //check_room_status(i+1);
    sem_post(&mutex);
}
void *passenger_work(void* x)
{
    while (1)
    { 
        int i= (*(int*)x);
        //printf("%d\n", i);
        occupy_room(i);
        //printf("hello");
        sleep(5);//taking rest
        vacant_room(i);
    }
}
int main()
{
    sem_init(&mutex, 0, 1);
    for(int i=0;i<n; i++)
    {
        sem_init(&p[i],0,0);
    }
    //pthread_t t1, t2;
    pthread_t a[n];
    for(int i=0; i<n; i++)
    {
        pthread_create(&a[i], NULL, passenger_work, ((void*)&i));
        sleep(1);
    }
    sleep(100);
    return 0;
}