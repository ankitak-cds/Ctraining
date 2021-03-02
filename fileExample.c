#include<stdio.h>
void main()
{
   FILE *f;
   int i=123;
   char str[]="welcome";
   f=fopen("text.txt","w");
   fputc('a',f);
   fputs("\nwelcome",f);
   fprintf(f,"\nwelcome");
   fprintf(f,"\n%d\n%s",i,str);
   fclose(f);
}