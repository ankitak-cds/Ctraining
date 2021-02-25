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
    emp emp1[10];
    int n;
    fp=fopen("employeedb","wb+");
    printf("\nEnter the number of employee");
    scanf("%d",&n);
    printf("\nEnter the employee id,emplyoee name and employee company");
    for(int i=0;i<n;i++)
    {
       scanf("%s%s%s",emp1[i].empid,emp1[i].empname,emp1[i].empempcom);
    }
    for(int i=0;i<n;i++)
    {
        strcpy(emp1[i].empid,"1");
        strcpy(emp1[i].empname,"Ankita");
        strcpy(emp1[i].empcom,"CDS");
        fwrite(&emp1[i],sizeof(emp1[i]),1,fp);
    }
    printf("\nDone with writing");
    close(fp);
}
