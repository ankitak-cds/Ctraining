#include <stdio.h>
int stack[5];
    int top=-1;
    int choice,item;
int main()
{
    while(1)
    {
    printf("\n---------Stack operations-------------");
    printf("\nEnter your choice");
    printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
       case 1:printf("\nPlease enter the item to be inserted:\n");
              scanf("%d",&item);
              push(item);
              break;
        case 2:pop();
               break;
        case 3:display();
               break;
        case 4:exit(1);
               break;
        default:printf("\nPlease enter a valid choice\n");
                break;
    }
    }
    return 0;
}
void push(int item)
{
    if(top==4)
    {
        printf("\nStack overflow");
        return;
    }
    else
    {
       stack[++top]=item;
       printf("\nThe element %d is added",item);
    }
}
void pop()
{
    if(top==-1)
    {
        printf("\nStack underflow");
        return -1;
        
    }
    else
    {
        printf("\nPopped element is %d",stack[top]);
        --top;
        return;
    }
    
}
void display()
{
    if(top==-1)
    {
        printf("\nStack underflow");
        
    }
    else
    {
        for(int i=top;i>=0;i--)
        {
            printf("\n%d",stack[top]);
        }
        return;
    }
}