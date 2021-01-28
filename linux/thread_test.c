#include <pthread.h>
#include <stdio.h>
void *thread_func(void *a) {  return NULL;  }
int main(int argc, char *argv[])
{
    size_t size;
    pthread_attr_t attr;
    pthread_attr_init(&attr);
    pthread_attr_getstacksize(&attr, &size);
    printf("Default stack size = %li\n", size);
    size = 32 * 1024 * 1024;
    pthread_attr_setstacksize (&attr, size);
    pthread_t tid;
    pthread_create(&tid, &attr, thread_func, NULL);
    pthread_attr_getstacksize(&attr, &size);
    printf("New stack size = %li\n", size);
    pthread_attr_destroy(&attr);
    pthread_join(tid, NULL);
    return 0;
}
