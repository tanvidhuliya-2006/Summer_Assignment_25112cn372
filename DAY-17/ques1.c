#include <stdio.h>
int main()
{
    int n,a1[10],a2[10],mer[20],i,m;
    printf("Enter the number of array elements in both the arrays");
    scanf("%d",&n);
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
    m=n+n;
    for(i=0;i<n;i++)
    {
        mer[i]=a1[i];
    }
    for(i=0;i<n;i++)
    {
        mer[n+i]=a2[i];
    }
    printf("Merged array is ");
    for(i=0;i<m;i++)
    {
        printf("%d ",mer[i]);
    }
    printf("\n");
    return 0;
}