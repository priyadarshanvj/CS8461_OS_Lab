#include<stdio.h>
void main()
{
        int pid1;
        printf("Hi! I am the main process: %d \n",getpid());
        pid1=fork();
        if(pid1<0)
                printf("\nError in creating a child process! \n");
        else
        {
                printf("Child process id : %d \n",getpid());
                printf("Parent process id : %d \n",getppid());
        }
}