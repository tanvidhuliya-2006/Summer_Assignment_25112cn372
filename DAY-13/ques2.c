#include <stdio.h>
int main()
{
    int sum=0, r,c,arr[10][10],i,j;
    double avg=0.0;
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
            sum=sum+arr[i][j];
        } 
    }
    avg=(double)sum/(r*c);
    printf("Sum is %d ",sum);
    printf("Average is %f",avg);
        
    return 0;
}