#include <stdio.h>
int prime(int x);
int main()
{
    int a,result;
    printf("Enter the number");
    scanf("%d",&a);
    result=prime(a);
    if(result==1)
    {
        printf("%d is prime",a);
    }
    else
    {
        printf("%d is not prime",a);
    }
    return 0;
}
int prime(int x)
{
    int count=0;
    for(int i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}