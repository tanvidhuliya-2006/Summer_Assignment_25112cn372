#include <stdio.h>
int main()
{
    int n,arr[10],item,count=0,pos=-1;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to check its frequency");
    scanf("%d",&item);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==item)
        {
            pos=i;
            count++;
        }
    }
    printf("The count of frequency of %d is %d ",item,count);
    return 0;
}