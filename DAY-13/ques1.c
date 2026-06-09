#include <stdio.h>
int main()
{
    int r,c,arr[10][10],i,j;
    printf("Enter the number of rows and columns");
    scanf("%d %d",&r,&c);
    printf("Enter the array elements");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}