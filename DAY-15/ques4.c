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
    int j=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            new[j]=arr[i];
            j++;
        }
    }
    while(j<n)
    {
        new[j]=0;
        j++;
    }
    printf("New array is ");
    for(i=0;i<n;i++)
    {
        printf("%d",new[i]);
    }
    return 0;
}