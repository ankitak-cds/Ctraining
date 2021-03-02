#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *create_node()
{
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    printf("Enter tha data:- ");
    scanf("%d",&new_node->data);
    new_node->next = NULL;
    return new_node;
}
struct node* create()
{
    int size,i;
    struct node *head=NULL;
    printf("Enter the size of linked list:-");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        if(i==0)
            head=create_node();
        else{
            struct node *temp=head;
            while(temp->next != NULL){
                temp=temp->next;
            }
            temp->next=create_node();
        }
    }
    return head;
}
int main()
{
    int size,i;
    printf("Enter the size of array:- ");
    scanf("%d",&size);
    struct node *array[size];
    for(i=0;i<size;i++)
    {
        array[i]=create();
    }
    for(i=0;i<size;i++)
    {
        struct node *temp=array[i];
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
return 0;
}