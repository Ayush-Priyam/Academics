/*In a civilized society, a gentle man lives with his spouse and his elderly parents.
Due to old age, his parents cannot be left alone in the house. So, at least any one of the spouse
must be available in the house. Write a synchronize solution using semaphore for this problem.*/
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
int sstate[2] = {0, 0}; // 0= outside house, 1= inside
sem_t spouse[2];
sem_t mutex;
int q = 1;
void status(int i)
{
    if ((sstate[(i + 1) % 2] == 1) && sstate[i] == 1 && q == 0)
    {
        printf("Spouse %d wants to leave the house, ",i);
        printf("Spouse %d has left the house\n", i);
        sstate[i] = 0;
        sem_post(&spouse[i]);
        // printf("hello2");
    }
    q = 0;
}

void enter(int i)
{
    int v;
    // printf("hello");
    sem_wait(&mutex);
    printf("Spouse %d has entered the house\n", i);
    sstate[i] = 1;
    if(q==0 && rand()%3==1)//randomizing if th other spouse wants to leave or not
    {
        //printf("Spouse %d wants to leave the house, ", (i + 1) % 2);
        status((i + 1) % 2);
    }
    else if(q==0)
        printf("Spouse %d does not want to leave the house\n", (i + 1) % 2);
    sem_post(&mutex);
    // printf("hello3");
}

void leave(int i)
{
    sem_wait(&mutex);
    // printf("hello4");

    status(i);
    // printf("hello5");
    sem_post(&mutex);
    sem_wait(&spouse[i]);
    // printf("hello6");
}
void *spouse_work1(void* i)
{
    while (1)
    {

        enter(0);
        sleep(3);//taking care of parents
        leave(0);
        //sleep(4);
    }
}
void *spouse_work2(void *i)
{
    while (1)
    {
        enter(1);
        sleep(2); // taking care of parents
        leave(1);
    }
}
// void *spouse_work(void *l)
// {
//     while (1)
//     {
//         int i = (*(int *)l);
//         int x = rand() % 5;
//         enter(i);
//         sleep(x); // taking care of parents
//         leave(i);
//     }
// }
int main()
{
    srand(time(0));
    printf("Initially both are outside, Enter CTRL+C to srop\n");
    sem_init(&mutex, 0, 1);
    sem_init(&spouse[0], 0, 0);
    sem_init(&spouse[1], 0, 0);
    pthread_t t[2];

    pthread_create(&t[0], NULL, spouse_work1, NULL);
    //sleep(2);
    pthread_create(&t[1], NULL, spouse_work2, NULL);
    sleep(1000);
    // pthread_create(&t2, NULL, thread, NULL);
    //  pthread_join(t1, NULL);
    //  pthread_join(t2, NULL);
    // sem_destroy(&mutex);
    return 0;
}