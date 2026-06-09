#include <stdio.h>
int perfect(int x);
int main()
{
    int a,result;
    printf("Enter the number");
    scanf("%d",&a);
    result=perfect(a);
    if(result==1)
    {
        printf("%d is a perfect number",a);
    }
    else
    {
        printf("%d is not a perfect number",a);
    }
    return 0;
}
int perfect(int x)
{
    int sum=0;
    for(int i=1;i<x;i++)
    {
        if(x%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}