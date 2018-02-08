#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int pid;

    printf("Forking child...\n"); fflush(stdout);

    pid = fork( );

    if (pid == 0)
    {
        printf("CHILD: Sleeping...\n"); fflush(stdout);

        sleep(10);

        printf("CHILD: Exiting...\n"); fflush(stdout);

	exit(0);
    }

    printf("PARENT: Sleeping...\n"); fflush(stdout);

    sleep(60);

    printf("PARENT: Exiting...\n"); fflush(stdout);

    exit(0);
}

