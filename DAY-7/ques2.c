#include <stdio.h>
int fibo(int x);
int main()
{
    int n,result=0;
    printf("Enter the number");
    scanf("%d",&n);
    result=fibo(n);
    printf("Fibonacci is %d",result);
    return 0;
}
int fibo(int x)
{
    if(x==0)
    {
        return 0;
    }
    else if(x==1)
    {
        return 1;
    }
    else
    {
        return fibo(x-1)+fibo(x-2);
    }
}