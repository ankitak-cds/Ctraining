#include<stdio.h>
#include<stdlib.h>
void main()
{
    int m,n,i,j;
    int a[100][100];
    printf("\nEnter the number of rows:");
    scanf("%d",&m);
    printf("\nEnter the number of columns:");
    scanf("%d",&n);
    printf("\nEnter the array values:\n");
    for(int i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n2D array elements are\n");
    for(int i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
}