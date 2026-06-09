#include <stdio.h>
int fibo(int x);
int main()
{
    int a,result;
    printf("Enter the number of terms");
    scanf("%d",&a);
    result=fibo(a);
    printf("  is Fibonacci series %d",result);
    return 0;
}
int fibo(int x)
{
    int a=0,b=1,c=0;
    for(int i=1;i<=x;i++)
    {
        printf("%d",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}