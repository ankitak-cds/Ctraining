#include <stdio.h>

#include <string.h>

union emp // new user defined datatype

{

char id[10];

char name[20];

};

int main()

{

union emp emp1; // struct emp vs emp1

strcpy(emp1.id,"1234");

printf("%s\n",emp1.id);

strcpy(emp1.name,"Kiran");

printf("%s\n",emp1.id);

printf("%s",emp1.name);

return 0;

}