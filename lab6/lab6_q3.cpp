#include<unistd.h>
#include<stdlib.h>
int main()
{
    int i,j;
    i=vfork();
    if(i==0)//child process
    {
        for(j=1;j<=10;j++)
         printf(“\nChild here”);
        exit(0);
    }
    else //parent process
    {
        for(j=1;j<=10;j++)
         printf(“\nParent here”);
    }
   exit(0);
}
