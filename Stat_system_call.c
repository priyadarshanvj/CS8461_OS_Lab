#include<errno.h>
#include<stdio.h>
#include<sys/stat.h>
#include<unistd.h>
int main()
{
struct stat statv;
if(stat(“notes.txt”,&statv)==-1)
perror(“stat”);
else
{
printf("\n The file user id is: %d",statv.st_uid); 
printf("\n The file group id is: %d",statv.st_gid);
printf("\n The file size is :%d",statv.st_size);
printf("\n The file inode number is :%d",statv.st_ino);
}
return 0;
}
