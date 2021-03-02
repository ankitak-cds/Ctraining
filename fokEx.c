#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
int main() 
{ 
  
    // make two process which run same 
    // program after this instruction 
    int pid=0;
    pid=fork(); 
    if(pid==0)
       printf("\nIn child\t");
    else 
       printf("\nIn parent\t");
    printf("Hello world!\n"); 
    return 0; 
} 