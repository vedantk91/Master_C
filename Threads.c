#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *routine()
{
    printf("Hello from threads\n");
    sleep(3); // check for parallelism
    printf("Ending thread\n");
}

int mails = 0;
pthread_mutex_t mutex;

void *routinemail()
{
    for (int i = 0; i < 10000000; i++)
    {
        pthread_mutex_lock(&mutex); // keeping the thread safe
        mails++;                    // shared memory - will lead to race w/o mutex
        pthread_mutex_unlock(&mutex);
    }
}

int main(int argc, char *argv[])
{
    pthread_t p1, p2, p3, p4;
    pthread_mutex_init(&mutex, NULL);
    if (pthread_create(&p1, NULL, &routinemail, NULL) != 0) // check if thread was created successfully
    {
        return 1; // return error code if not
    }
    if (pthread_create(&p2, NULL, &routinemail, NULL) != 0)
    {
        return 2;
    }
    if (pthread_create(&p3, NULL, &routinemail, NULL) != 0)
    {
        return 3;
    }
    if (pthread_create(&p4, NULL, &routinemail, NULL) != 0)
    {
        return 4;
    }
    if (pthread_join(p1, NULL) != 0)
    {
        return 5;
    }
    if (pthread_join(p2, NULL) != 0)
    {
        return 6;
    }
    if (pthread_join(p3, NULL) != 0)
    {
        return 7;
    }
    if (pthread_join(p4, NULL) != 0)
    {
        return 8;
    }
    pthread_mutex_destroy(&mutex);
    printf("Number of mails: %d\n", mails);
    return 0;
}