#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    int pid;
    printf("\nI'm the original process with PID %d and PPID %d.\n\n", getpid(), getppid());
    pid = fork();

    if (pid == 0)
    {
        printf("I'm the child process with PID %d and PPID %d.\n",
               getpid(), getppid());
    }
    else
    {
        printf("I'm the parent process with PID %d and PPID %d.\n",
               getpid(), getppid());
        printf("My child's PID is %d\n", pid);
    }

    printf("PID %d terminates.\n\n", getpid());
    
    return 0;
}