#include<stdio.h>
#include<unistd.h>
# define msgsize 20
char *msg = "hello world";
int main()
 {
 
 char buf[msgsize];
 int p[2],pid,m1;
 
 if(pipe(p) < 0)
  exit(1);
  //parent
  if((pid = fork())>0){
  write(p[1],msg,msgsize);//parents msg
   printf("\nParent message sent successfully");
  }
  else
  {
   while((m1=read(p[0],buf,msgsize))>0)
   printf("\n%s",buf);
   printf("\nReceived parent's message");
   printf("Finished reading\n");
   }
   return 0;
 }
