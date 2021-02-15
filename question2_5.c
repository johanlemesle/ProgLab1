#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    int pid, pid2;
    pid = fork();

    if (pid == 0)
    {
        printf("I'm the child 1st-level process with PID %d and PPID %d.\n",
               getpid(), getppid());
        pid2 = fork();
        if (pid2 == 0)
        {
            printf("I'm the child 2nd-level process with PID %d and PPID %d.\n",
                   getpid(), getppid());
        }
        else
        {
            printf("My child's PID is %d\n", pid2);
        }
    }
    else
    {
        printf("I'm the parent process with PID %d and PPID %d.\nMy child's PID is %d\n",
               getpid(), getppid(), pid);
    }

    printf("PID %d terminates.\n\n", getpid());

    return 0;
}