#include <stdio.h>
int sumdigit(int x);
int sum=0;
int main()
{
    int n,result=0;
    printf("Enter the number");
    scanf("%d",&n);
    result=sumdigit(n);
    printf("Sum of digits is %d",result);
    return 0;
}
int sumdigit(int x)
{
    int d=0;
    if(x>0)
    {
        d=x%10;
        sum=sum+d;
        sumdigit(x/10);
    }
    else
    {
        return(sum);
    }
}