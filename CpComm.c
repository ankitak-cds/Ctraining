#include<stdio.h>
#include<unistd.h>
#define MSGSIZE 20
char *msg = "hello world";
char *msg1="HELLO";
int main()
 {
 
 char buf[MSGSIZE];
 int p[2],q[2],pid,m1,m2;
 
 if(pipe(p) < 0)
  exit(1);
  //parent
  if((pid = fork())>0){
  write(p[1],msg,MSGSIZE);//parents msg
   printf("\nParent message sent successfully\n");
  }
  else
  {
   close(p[1]);
   while((m1=read(p[0],buf,MSGSIZE))>0)
   {
      printf("\n%s",buf);
      printf("\nReceived parent's message\n");
      printf("Finished reading\n");
   }
   }
   if(pipe(q) < 0)
        exit(1);
   if(pid=fork()==0)
   {
      write(p[1],msg1,MSGSIZE);//child msg
      printf("\nChild message sent successfully");
   }
   else
   {
     close(p[1]);
     while((m2=read(p[0],buf,MSGSIZE))>0)
    { 
        printf("\n%s",buff);
        printf("\nReceived child's message\n");
        printf("\nFinished reading\n");
     }
   }
   return 0;
 }
