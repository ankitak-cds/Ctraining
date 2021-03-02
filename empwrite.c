#include<stdio.h>
#include<stdio.h>
#include<string.h>
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
    fp=fopen("employeedb","wb+");
    strcpy(emp1.empid,"1");
    strcpy(emp1.empname,"Ankita");
    strcpy(emp1.empcom,"CDS");
    fwrite(&emp1,sizeof(emp1),1,fp);
    printf("\nDone with writing");
    close(fp);
}