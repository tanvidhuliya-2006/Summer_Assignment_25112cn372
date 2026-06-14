#include <stdio.h>
int main()
{
    int n,arr[10],rev[10],i,j;
    printf("Enter the number of elements in the array");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    i=0;
    j=n-1;
    while(j>=0)
    {
        rev[i]=arr[j];
        i++;
        j--;
    }
    
    
    printf("Reverse of the array is ");
    for(i=0;i<n;i++)
    {
        printf("%d ",rev[i]);
    }
    
    return 0;
}