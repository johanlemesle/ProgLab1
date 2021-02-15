#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    int i = 5;
    if (fork() == 0)
    {
        execlp("code", "code", "test", NULL);
        i++;
        printf("%d\n", i);
        // how is this line handled ?
    }
    else
    { 
        printf("PID : %d\n", getpid());
    }
    return 0;
}