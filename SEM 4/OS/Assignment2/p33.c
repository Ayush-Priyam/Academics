/*In a civilized society, a gentle man lives with his spouse and his elderly parents.
Due to old age, his parents cannot be left alone in the house. So, at least any one of the spouse
must be available in the house. Write a synchronize solution using semaphore for this problem.*/
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
int spouse_state[2] = {0, 0}; // 0= outside house, 1= inside
sem_t spouse[2];
sem_t mutex;
int q = 1;
char *c[2] = {"Husband", "Wife"};
void spouse_status(int i)
{
    if ((spouse_state[(i + 1) % 2] == 1) && spouse_state[i] == 1 && q == 0)
    {
        printf("%s has left the house\n", c[i % 2 ]);
        spouse_state[i] = 0;
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
    printf("%s has entered the house\n", c[(i % 2)]);
    spouse_state[i] = 1;
    spouse_status(i + 1);
    sem_post(&mutex);
    // printf("hello3");
}

void leave(int i)
{
    sem_wait(&mutex);
    // printf("hello4");
    spouse_status(i);
    // printf("hello5");
    sem_post(&mutex);
    sem_wait(&spouse[i]);
    // printf("hello6");
}
void *spouse_work1(void *i)
{
    while (1)
    {
        enter(0);
        sleep(1); // taking care of parents
        leave(0);
    }
}
void *spouse_work2(void *i)
{
    while (1)
    {
        enter(1);
        sleep(3); // taking care of parents
        leave(1);
    }
}

int main()
{
    srand(time(0));
    printf("Initially both are outside\n");
    sem_init(&mutex, 0, 1);
    sem_init(&spouse[0], 0, 0);
    sem_init(&spouse[1], 0, 0);
    pthread_t t1, t2;
    pthread_create(&t1, NULL, spouse_work1, NULL);
    sleep(2);
    pthread_create(&t2, NULL, spouse_work2, NULL);
    sleep(1000);
    sleep(1000);
    // pthread_create(&t2, NULL, thread, NULL);
    //  pthread_join(t1, NULL);
    //  pthread_join(t2, NULL);
    // sem_destroy(&mutex);
    return 0;
}