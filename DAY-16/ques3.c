#include <stdio.h>
int main()
{
    int n,a1[10],a2[10],i,num;
    printf("Enter the number of elements of both the array");
    scanf("%d",&n);
    printf("Enter the sum");
    scanf("%d",&num);
    printf("Enter the array elements of 1");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("Enter the array elements of 2");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a2[i]);
    }
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a1[i]+a2[j]==num)
            {
    
                printf("Pair is %d %d ",a1[i],a2[j]);
            }
        }
    } 
    return 0;
}