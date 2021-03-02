#include<stdio.h>
#include<stdlib.h>
int a[4][3],i,j,b[10],k=0;
struct node
{
   int data;
   struct node *nex;
};
struct node* head[10];
void d2()
{
   for(i=0;i<4;i++)
   {
     for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
   }
   for(i=0;i<4;i++)
   {
      for(j=0;j<3;j++)
        printf("%d\t",a[i][j]);
      printf("\n");
    }
}
void ha()
{
   for(i=0;i<4;i++)
   {
      struct node* new=(struct node*)malloc(sizeof(struct node*));
      new->data=a[i][0];
      new->nex=NULL;
      head[i]=new;
      for(j=1;j<3;j++)
      {
         struct node* new=(struct node*)malloc(sizeof(struct node*));
         new->data=a[i][j];
         new->nex=NULL;
         struct node* p;
         p=head[i];
         while(p->nex!=NULL)
         {
             p=p->nex;
         }
         p->nex=new;
     }
   }
}
void dis()
{
     struct node* p1;
     for(i=0;i<4;i++)
     {
         printf("%u->",head+i);
         p1=head[i];
         while(p1!=NULL)
        {
           printf("%d\t",p1->data);
           p1=p1->nex;
        }
         printf("\n");
      }
}
int main()
{
    int c;
    while(1)
   {
       scanf("%d",&c);
       switch(c)
      {
         case 1:d2();
                break;
         case 2:ha();
                break;
         case 3:dis();
                break;
         default:exit(0);
       }
    }
    return 0;
}