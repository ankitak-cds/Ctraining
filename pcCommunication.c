#include<stdio.h>
#include<unistd.h>
#define MSGSIZE 20
char *msg = "hello world";
int main()
{
 
 char buf[MSGSIZE];
 int p[2],pid,m1;
 if(pipe(p)<0)
 exit(1);
  //parent
  if((pid=fork())>0){
  write(p[1],msg,MSGSIZE);//parents msg
  printf("\nParent message sent successfully\n");
  }
  else
  {
   close(p[1]);
   while((m1=read(p[0],buf,MSGSIZE))>0)
   printf("\n%s",buf);
   printf("\nReceived parent's message\n");
   printf("Finished reading\n");
   }
   return 0;
 }