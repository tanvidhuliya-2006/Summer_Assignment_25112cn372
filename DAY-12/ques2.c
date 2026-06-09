#include <stdio.h>
#include <math.h>
int arm(int x);
int main()
{
    int a,result;
    printf("Enter the number");
    scanf("%d",&a);
    result=arm(a);
    if(result==1)
    {
        printf("%d is armstrong",a);
    }
    else
    {
        printf("%d is not armstrong",a);
    }
    return 0;
}
int arm(int x)
{
    int count=0;int k=x;int n=x;double sum=0.0;
    while(x != 0)
    {
        x=x/10;
        count++;
        
    }
    while(n > 0)
    {
        int d=n%10;
        sum=sum+pow(d,count);
        n=n/10;
    }
    if((int)sum==k)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
    