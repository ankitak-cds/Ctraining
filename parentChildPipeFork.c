#include<stdio.h>
#include<unistd.h>
void main()
{
    int p1[2],p2[2];
    int pid=0;
    char data[5]=" ";
    char data1[5]=" ";
    if(pipe(p1)<0)
    {
       printf("\nPipe error");
       return;
    }
    if(pipe(p2)<0)
    {
       printf("\nPipe error");
       return;
    }
    if((pid=fork())<0)
    {
        printf("\nFork error");
        return;
    }
    if(pid==0)
    {    
        sleep(5);
        read(p1[0],data,5); //p1[0]
        printf("\n%d data is %s",getpid(),data);
        write(p2[1],"HELLO",5); //p2[1]
    }
    if(pid>0) //parent
    {
        write(p1[1],"hello",5); //p1[1]
        sleep(10);
        read(p2[0],data1,5); //p2[0]
        printf("\n%d data is %s",getpid(),data1);
        
    }
}