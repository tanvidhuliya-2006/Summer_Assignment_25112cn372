#include <stdio.h>
int sum(int x,int y);
int main()
{
    int a,b,result;
    printf("Enter the two numbers");
    scanf("%d %d",&a,&b);
    result=sum(a,b);
    printf("Sum of numbers is %d",result);
    return 0;
}
int sum(int x,int y)
{
    int sum=0;
    sum=x+y;
    return sum;
}