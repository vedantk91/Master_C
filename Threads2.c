#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <semaphore.h>

#define THREAD_NUM 4

sem_t semaphore;

void *routine(void *args)
{
    sem_wait(&semaphore);
    sleep(1);
    printf("Hello from thread %d\n", *(int *)args); // typecast args first and then deref
    sem_post(&semaphore);
    free(args);
}

int main(int argc, char *argv[])
{
    pthread_t th[THREAD_NUM];
    sem_init(&semaphore, 0, 4); // 0 processes, 4 value of semaphore
    int i;
    for (i = 0; i < THREAD_NUM; i++) // creating 4 threads in a loop
    {
        int *a = malloc(sizeof(int));
        *a = i;
        if (pthread_create(&th[i], NULL, &routine, a) != 0) //&th[i] creates a thread with a unique ID //a is passed as an argument to all the threads
        {
            perror("Failed to create thread");
        }
    }

    for (i = 0; i < THREAD_NUM; i++)
    {
        if (pthread_join(th[i], NULL) != 0)
        {
            perror("Failed to join thread");
        }
    }
    sem_destroy(&semaphore);
    return 0;
}