#include <stdio.h>
int main()
{
    int n,n1,gcd;
    printf("Enter value of n and n1");
    scanf("%d %d",&n,&n1);
    
    if(n>n1)
    {
        for(int i=1;i<n;i++)
        {
           if(n%i==0 && n1%i==0)
           gcd=i;
        }
    }
    else
    {
        for(int i=1;i<n1;i++)
        {
           if(n%i==0 && n1%i==0)
           gcd=i;
        }
    }
    printf("GCD is %d",gcd);
    return 0;

}