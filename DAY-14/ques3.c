#include <stdio.h>
int main()
{
    int n,item,arr[10],i;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    printf("Second largest element of the array is %d ",arr[i-2]);
    
    return 0;
}
    

