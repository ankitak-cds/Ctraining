#include <stdio.h>
#include<string.h>
struct emp
{
  char id[10];
  char em_name[20];
};
struct emp emps[3];
int main ()
{
  char sid[10],sname[20];
  int ctr=0;
  char nullstr[2]=" ";
  int flag=0;
  int sindex=0;
  printf("Enter the number of employees:\n");
  scanf("%d",&ctr);
  printf ("Enter the employee ID and Name\n");
  for (int i = 0; i < ctr; i++)
    {
      scanf ("%s", emps[i].id);
      scanf ("%s", emps[i].em_name);
    }
    printf("Employee list\n");
  for (int i = 0; i < ctr; i++)
    {
      printf ("%s\t", emps[i].id);
      printf ("%s\n", emps[i].em_name);
    }
  printf ("Enter the employee id or employee name to delete\n");
  scanf ("%s", sid);
  for (int i = 0; i < ctr; i++)
    {
      if (strcmp (sid, emps[i].id) == 0 || strcmp (sid, emps[i].em_name) == 0 )
	{
	    flag=1;
	    strcpy(emps[i].id,nullstr);
        strcpy(emps[i].em_name,nullstr);
        break;
	  }
    }
    if(flag==1)
{

printf("Employee removed from the list\n");
}
      else
     	printf("Employee with id %s not found \n",sid);
printf("-------Updated Employees List ------- \n");
for (int i = 0; i < ctr; i++)
{
    printf("%s\t",emps[i].id);
    printf("%s\n",emps[i].em_name);
}	
return 0;
}