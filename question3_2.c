#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    // display the process id// simply use any exec call !
    printf("PID : %d\n", getpid());
    execlp("code", "code", "test", NULL);
    return 0;
}