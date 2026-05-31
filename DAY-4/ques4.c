#include <stdio.h>
#include <math.h>
int main()
{
    int num, n,c=0,a,b,d,digit,k;
    double sum;
    printf("Enter the number");
    scanf("%d",&n);
    printf("Enter the range in a and b");
    scanf("%d %d",&a,&b);
    k=n;
    num=n;
    for(int i=a;i<=b;i++)
    {
    while(n!=0)
    {
        n=n/10;
        c++;
    }
        while(num>0)
        {
        
            digit=num%10;
          sum=sum+(pow(digit,c));
          num=num/10;
        }

        
        if((int)sum==k)
        {
            printf("Armstrong number %d",k);
        }
        else
        {

            printf("Not armstrong number %d",k);
        }
    }
    
        return 0;
}
