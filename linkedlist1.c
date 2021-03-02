//linked list example without pointer
#include<stdio.h>
struct node
{
    int data;
    struct node *link;
};
typedef struct node ll;
void main()
{
    ll l1,l2,l3,l4;
    l1.data=2;
    l2.data=4;
    l3.data=6;
    l4.data=8;
    l1.link=&l2;
    l2.link=&l3;
    l3.link=&l4;
    l4.link=NULL;
    printf("\n%d %d->",l1.data,&l2);
    printf("%d %d->",l2.data,&l3);
    printf("%d %d->",l3.data,&l4);
    printf("%d %d",l4.data,NULL);
}