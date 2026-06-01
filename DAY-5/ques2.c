#include <stdio.h>
int main()
{
    int num, j,d,n,i,fact=1,sum=0;
    printf("Enter the number");
    scanf("%d",&n);
    num=n;
    while(num>0)
    {
        d=num%10;
        
            fact=1;
            for(j=1;j<=d;j++)
            {
                fact=fact*j;
            }
            sum=sum+fact;
        
        num=num/10;
    }
    if(sum==n)
    {
        printf("%d is a strong number",n);
    }
    else
    {
        printf("%d is not a strong number",n);
    }
    return 0;

}