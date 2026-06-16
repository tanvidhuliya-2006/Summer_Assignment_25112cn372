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
    int maxfrequency=0;
    int maxfrequencynumber=arr[0];
    for(i=0;i<n;i++)
    {
        int freq=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]==arr[i])
            {
                freq++;
            }
        }
        if(maxfrequency<freq)
        {
            maxfrequency=freq;
            maxfrequencynumber=arr[i];
        }
    }
    printf("Max freq is %d and max freq element is %d ",maxfrequency,maxfrequencynumber);
    return 0;
}