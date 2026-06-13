#include <stdio.h>
int main()
{
    int n,arr[10],i;
    printf("Enter the number of array elements");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d is duplicate element in given array ",arr[i]);
            }
        }
    }
    return 0;
}