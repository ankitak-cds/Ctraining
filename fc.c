#include<stdio.h>
int main(int argc,char *argv)
{
   int c;
   FILE *fp1,*fp2;
   if(argc!=3)
   {
       printf("\nEnter atleast 2 command line arguments");
       printf("%s sourcefile,destinationFile",argv[0]);
       return 1;
    }
    fp1=fopen(argv[1],"r");
    if(fp1==NULL)
    {
       printf("\nCan not open the file");
       return 1;
    }
    fp2=fopen(argv[2],"w");
    if(fp2==NULL)
    {
       printf("Can not open destination file");
       fclose(fp1);
       return 1;
     }
    while(1)
    {
    	c=fgetc(fp1);
    	if(feof(fp1)) 
          break;
        fputc(c,fp2);
     }
     fclose(fp1);
     fclose(fp2);
     return 0;
}	