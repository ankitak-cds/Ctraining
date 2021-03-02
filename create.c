
#include <stdio.h>
#include<string.h>
struct emp
{
  char id[10];
  char em_name[20];
};
struct emp emps[3];
int
main ()
{
  char sid[10];
  int flag=0;
  int sindex=0;
  printf ("Enter the employee ID and Name");
  for (int i = 0; i < 3; i++)
    {
      scanf ("%s", emps[i].id);
      scanf ("%s", emps[i].em_name);
    }
  for (int i = 0; i < 3; i++)
    {
      printf ("%s\t", emps[i].id);
      printf ("%s\n", emps[i].em_name);
    }
  printf ("Enter the employee id to search:");
  scanf ("%s", sid);
  for (int i = 0; i < 3; i++)
    {
      if (strcmp (sid, emps[i].id) == 0)
	{
	    flag=1; sindex = i;

         break;
	  
	}
    }
    
	if(flag==1)

{

printf("Employee Found \n");

printf("%s\t",emps[sindex].id);

printf("%s\n",emps[sindex].em_name);

}
      else
	printf ("Employee not found");
  return 0;
}
