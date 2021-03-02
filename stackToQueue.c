#include<stdio.h>
#define MAX 5
int top=-1,f=-1,r=-1;
int ch,ele;
int s[MAX],q[MAX];
void main()
{
    while(1)
    {
        printf("\nEnter your choice:\n1.Push\n2.Print\n3.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("\nEnter the element:");
                   scanf("%d",&ele);
                   push(ele);
                   break;
            case 2:print();
                   break;
            case 3:exit(0);
                   break;
            default:printf("\nEnter a valid number");
                    break;
        }
    }
}
void push(int ele)
{
    if(top==MAX-1)
    {
        printf("\nStack overflow");
        return;
    }
    s[++top]=ele;
    printf("\n%d is inserted into the stack",s[top]);
    if(f==-1)
       f=0;
       q[++r]=s[top];
       printf("\n%d is copied into the queue",q[r]);
}
void print()
{
     if(top==-1)
    {
        printf("\nStack underflow");
        return;
    }
    printf("\nElements of stack are:");
    for(int i=top;i>=0;i--)
    {
        printf("%d\t",s[i]);
    }
    printf("\n");
    printf("\nElements of queue are:");
    for(int i=f;i<=r;i++)
    {
        printf("%d\t",q[i]);
    }
    printf("\nCopy successfull");
}