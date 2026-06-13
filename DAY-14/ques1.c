#include <stdio.h>
int main()
{
    int n,arr[10],item;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(int i=0;i<n;i++)
    {
            scanf("%d",&arr[i]);
        
    }
    printf("Enter the item to be searched");
    scanf("%d",&item);
        int pos=-1;
        for(int i=0;i<n;i++)
        {
           if(arr[i]==item)
           {
            pos=i;
            break;
           } 
        }
        if(pos>=0)
        {
            printf("%d is found in position %d ",item,pos+1);
        }
        else
        {
            printf("%d not found",item);
        }
        return 0;
    }
