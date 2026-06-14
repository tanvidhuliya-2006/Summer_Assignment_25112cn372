#include <stdio.h>
int main()
{
    int n,arr[10],i,new[10];
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            new[n-1]=arr[i];
        }
        else
        {
            new[i-1]=arr[i];
        }
    }
    printf("New array is ");
    for(i=0;i<n;i++)
    {
        printf("%d ",new[i]);
    }
    return 0;
}