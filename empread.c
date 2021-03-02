#include<stdio.h>
#include<stdio.h>
struct employee
{
    char empid[10];
    char empname[20];
    char empcom[20];
};
typedef struct employee emp;
FILE *fp;
void main()
{
    emp emp1;
    fp=fopen("employeedb.bin","rb");
    fseek(fp,0,SEEK_SET);
    fread(&emp1,sizeof(emp1),1,fp);
    printf("\nDone with reading");
    printf("%s\n",emp1.empid);
    printf("%s\n",emp1.empname);
    printf("%s\n",emp1.empcom);
    close(fp);
}