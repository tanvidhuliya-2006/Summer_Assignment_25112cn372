#include <stdio.h>
#include <math.h>
int main()
{
    int n,c=0,d,digit,num,k;
    double sum;
    printf("Enter the number");
    scanf("%d",&n);
    k=n;
    num=n;
    while(n!=0)
    {
        n=n/10;
        c++;
    }
    
    while(num>0)
    {
        digit =num%10;

    sum=sum+(pow(digit,c));
    num=num/10;
    }
    
    if((int)sum==k)
    {
        printf("Number is armstrong %d",k);
    }
    else
    {
        printf("Number is not armstrong %d",k);
    }
    return 0;
    
}