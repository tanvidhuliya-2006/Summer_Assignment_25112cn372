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
    int flag=-1,low=0,high=n-1,mid,pos=-1;
    int num;
    printf("Enter the number to be searched ");
    scanf("%d",&num);
    while((low<=high) && (flag==-1))
    {
        mid=(low+high)/2;
        {
            if(arr[mid]==num)
            {
                pos=mid;
                flag=1;
            }
            else if(arr[mid]>num)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }

        }
    }
    if(flag!=-1)
    {
        printf("%d found at position %d ",num,pos+1);
    }
    else
    {
        printf("Number not found");
    }
    return 0;
}