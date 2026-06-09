#include <stdio.h>
int main()
{
    int r,c,i,j,arr[10][10],even=0,odd=0;
    printf("Enter the number of rows and column");
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
            if(arr[i][j]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
    }
    printf("Count of even elements are %d ",even);
    printf("Count of odd elements are %d ",odd);
    return 0;
}