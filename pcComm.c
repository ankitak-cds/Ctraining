#include <stdio.h>
#include <unistd.h>
#define MSGSIZE 16
char* msg1 = "hello";
int main()
{
    char buf[MSGSIZE];
    int p[2],i;
    if(pipe(p) < 0)
        exit(1);
   
    write(p[1],msg,MSGSIZE);
   
    read(p[0],buf,MSGSIZE);
    printf("%s\n",buf);
    }
    return 0;
}
