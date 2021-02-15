#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    int i = 5;
    fork();
    if (fork() == 0)
    {
        printf("I’m the child\n");
        i++;
    }
    else
    {
        printf("I’m the parent\n");
        sleep(3);          // sleep for 3 seconds
        printf("%d\n", i); // what happens here ?? Explain
    }

    return 0;
}