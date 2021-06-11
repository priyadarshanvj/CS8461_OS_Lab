#include<stdio.h>
#include<unistd.h>
int i=10;
void main()
{
        int pid=fork();
        if(pid==0)
        {
                printf("Initial value of i %d\n",i);
                i+=10;
                printf("Value of i %d\n",i);
                printf("Child Terminated\n");
        }
        else
        {
                wait(0);
                printf("Value of i in parent process %d\n",i);
        }
}
