void insert();
void delete();
void display();
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int f=-1,r=-1,ele;
int q[MAX];
void main()
{
    int ch;
    while(1)
    {
        printf("\n-----Queue opeations-----");
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert();
                   break;
            case 2:delete();
                   break;
            case 3:display();
                   break;
            case 4:exit(0);
                   break;
        }
    }
}
void insert()
{
    if(r==MAX-1)
    {
        printf("\nQueue overflow");
        return;
    }
    else
    {
        if(f==-1)
        f=0;
        printf("\nEnter the element:");
        scanf("%d",&ele);
        q[++r]=ele;
        printf("\n%d is inserted into the queue",q[r]);
    }
}
void delete()
{
    if(f==-1 || f>r)
    {
        printf("\nQueue underflow");
        return;
    }
    else
    {
        printf("\nThe element %d is deleted from the queue",q[f++]);
    }
}
void display()
{
    if(f==-1 || f>r)
    {
        printf("\nQueue is empty");
        return;
    }
    else
    {
        printf("\nQueue elemets are\n");
        for(int i=f;i<=r;i++)
        {
            printf("%d\t",q[i]);
        }
    }
}