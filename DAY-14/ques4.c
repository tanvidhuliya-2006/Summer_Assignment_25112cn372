#include <stdio.h>
int main()
{
    int n,arr[10],item,count=0,i;
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
        }
    }
}