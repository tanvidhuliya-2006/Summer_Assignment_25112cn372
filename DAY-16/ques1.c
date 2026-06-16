#include <stdio.h>
int main()
{
    int n,arr[10],i,j;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int found=0;
    printf("The missing element in the array are ");
    for(i=1;i<=n;i++)
    {
        found=0;
        for(j=0;j<n;j++)
        {
            if(arr[j]==i)
            {
                found=1;
                break;
            }
        }
        if(!found)
        {
            printf("%d ",i);
        }
    }
    return 0;
}