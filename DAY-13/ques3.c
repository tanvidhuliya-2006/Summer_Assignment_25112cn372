#include <stdio.h>
int main()
{
    int i,j, r,c,arr[10][10],min,max;
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
    min=arr[0][0];
    max=arr[0][0];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(arr[i][j]>max)
            max=arr[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(arr[i][j]<min)
            min=arr[i][j];
        }
    }
    printf("Maximum element is %d ",max);
    printf("Minimum element is %d ",min);
    return 0;
}