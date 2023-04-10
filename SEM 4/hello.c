#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#define NUM_THREADS 5
int p=0;
void *PrintHello(void *threadid)
{
    // int tid;//tid = *((int *)threadid);
    // printf("Hello World! Thread %s\n", (char *)threadid);
    for (int i = 0; i < 10; i++)
    {
        printf("A\nB\n");
        //p++;
    }
    pthread_exit(NULL);
}

int main(int argc, char *argv[])
{
    pthread_t t1,t2;
    int rc;
    int t;
    rc = pthread_create(&t1, NULL, PrintHello,NULL);
    rc = pthread_create(&t2, NULL, PrintHello,NULL);
    //printf("%d\n",p);
    printf("main Terminates\n");
    return 0;
}