#include<stdio.h>
#include<unistd.h>
void main()
{
        int count;
        if(fork()==0)
        {
                for(count=0;count<5;count++)
                {
                        printf("My parent is %d \n",getppid());
                        sleep(1);
                }
                exit(1);
        }
        sleep(2);
        printf("\n Parent is terminated and Child is orphan \n");
}