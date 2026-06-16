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
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
               for(int k=j;k<n-1;k++)
               {
                arr[k]=arr[k+1];
               }
               n--;
               j--;
            }
        }
    }
    printf("Array after removing duplicate");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}