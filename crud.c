#include<stdio.h>
#include<string.h>
struct book
{
    char author[30];
    char book_id[20];
    char book_name[100];
};
int main()
{
    struct book b[3];
    char bid[30],bname[30],bauthor[30];
    int sindex=0;
    int flag=0;
    printf("Enter the author name,book ID and book name\n");
    for(int i=0;i<3;i++)
    {
        scanf("%s",b[i].author);
        scanf("%s",b[i].book_id);
        scanf("%s",b[i].book_name);
    }
    printf("The entered data is\n");
    for(int i=0;i<3;i++)
    {
    printf("%s\t",b[i].author);
    printf("%s\t",b[i].book_id);
    printf("%s\n",b[i].book_name);
    }
    printf("Enter the book_id to update\n");
    scanf("%s",bid);
    for(int i=0;i<3;i++)
    {
        if(strcmp(bid,b[i].book_id)==0)
        {
            flag=1;
            printf("Enter the new id,author and book name\n");
            scanf("%s",bid);
            scanf("%s",bauthor);
            scanf("%s",bname);
            strcpy(b[i].book_id,bid);
            strcpy(b[i].author,bauthor);
            strcpy(b[i].book_name,bname);
            break;
        }
    }
    if(flag==1)
    {
        printf("Book data updated\n");
        printf("Updated book list\n");
        for(int i=0;i<3;i++)
        {
            printf("%s\t",b[i].author);
            printf("%s\t",b[i].book_id);
            printf("%s\n",b[i].book_name);
        }
    }
else
printf("No data found\n");
printf("Enter the book id to be deleted\n");
scanf("%s",bid);
for(int i=0;i<3;i++)
{
    if(strcmp(bid,b[i].book_id)==0)
    {
        flag=1;
        strcpy(b[i].book_id,"\0");
        strcpy(b[i].book_name,"\0");
        strcpy(b[i].author,"\0");
        break;
    }
}
if(flag==1)
{
    printf("\nBook id deleted successfully\n");
    printf("Updated data\n");
    for(int i=0;i<3;i++)
        {
            printf("%s\t",b[i].author);
            printf("%s\t",b[i].book_id);
            printf("%s\n",b[i].book_name);
        }
}
else
printf("No book found");
return 0;
}
