#include <stdio.h>

main(int argc,char** argv) {
   if(argc<2)
  {
      printf("\nAt least one argument required\n");
      printf("\n%s filename",argv[0]);
      return;
   }
   FILE *fp;
   char buff[1255];

   fp = fopen(argv[0], "r");
   fscanf(fp, "%s", buff);
   printf("1 : %s\n", buff );
   fclose(fp);

}