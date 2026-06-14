#include <stdio.h>
int main()
{
    int n,arr[10],new[10],i;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            new[0]=arr[n-1];
        }
        else
        {
            new[i]=arr[i-1];
        }
    }
    printf("New array is");
    for(i=0;i<n;i++)
    {
        printf("%d ",new[i]);
    }
    return 0;
}