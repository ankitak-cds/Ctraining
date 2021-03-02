#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
typedef struct node ll;
int main()
{
    ll n2;
    FILE *fp;
    fp=fopen("data","rb");
    fseek(fp,0,SEEK_SET);
    fread(n2,sizeof(n2),1,fp);
    printf("\n%d",n2.data);
    printf("\n%u",n2.link);
    fclose(fp);
    return(0);
}