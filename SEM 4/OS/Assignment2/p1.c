/*1. In a railway ticket booking office, maximum 10 persons, either male, female, or both are
//allowed to go inside.There are three ticket counters in the booking office.
Among these 10 persons, a maximum of 3 persons are allowed to book the ticket at a time with
a restriction that all these 3 persons can neither be male nor be female.
It means that maximum of 2 males with 1 female or maximum of 2 females with 1 male is allowed to book
the ticket.Write a solution using semaphore to synchronize among the males and females to book their
ticket.*/
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

sem_t per, m, f, max;// semaphores for persons, male, female, max
// void booking(int x)
// {
//     if(x==1)
//         printf("A male Booking the ticket\n");
//     else
//         printf("A female is Booking the ticket\n");
//     sleep(10); // TICKET BOOKING CODE
//     printf("Booking Done\n");
// }
void *malebook(void* x)
{
    int i = (*(int *)x);
    sem_wait(&per);
    sem_wait(&m);
    sem_wait(&max);
    printf("Male %d is Booking the ticket\n", i);
    sleep(3);
    printf("Booking by male %d Done and he has left.\n",i);
    sem_post(&per);
    sem_post(&m);
    sem_post(&max);
}
void *femalebook(void* x)
{
    int i = (*(int *)x);
    sem_wait(&per);
    sem_wait(&f);
    sem_wait(&max);
    printf("Female %d is Booking the ticket\n", i);
    sleep(3);
    printf("Booking by female %d Done and she has left\n", i);
    sem_post(&per);
    sem_post(&f);
    sem_post(&max);
}
int main()
{
    srand(time(0));
    sem_init(&per, 0, 10);
    sem_init(&m, 0, 2);
    sem_init(&f, 0, 2);
    sem_init(&max, 0, 3);
    pthread_t t1, t2;
    pthread_t mt[10];
    pthread_t ft[10];
    for(int i=1;i<=10; i++)
    {
        int x= rand()%5;//randomizing arrival times
        pthread_create(&mt[i], NULL, malebook, ((void *)&i));
        sleep(x);
        pthread_create(&ft[i], NULL, femalebook, ((void *)&i));
        sleep((x*x)%5);
    }
    sleep(120);
    return 0;
}