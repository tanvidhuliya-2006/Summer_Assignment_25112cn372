#include <stdio.h>
#include <string.h>
int main()
{
    int a1[50],a2[50],mer[100];
    int i,j,k, n;
    printf("Enter the number of elements in both array");
    scanf("%d",&n);
    printf("Enter the array elements in 1");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("Enter the array elements in 2");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a2[i]);
    }
    i=0,j=0,k=0;
    while(i<n && j<n)
    {
       if(a1[i]<a2[j])
       {
        mer[k++]=a1[i++];
       }
       else
       {
        mer[k++]=a2[j++];
       }
    }
    while(i<n)
    {
        mer[k++]=a1[i++];
    }
    while(j<n)
    {
        mer[k++]=a2[j++];
    }
    printf("Merged array is ");
    for(i=0;i<n+n;i++)
    {
        printf("%d ",mer[i]);
    }
    printf("\n");
    return 0;
}