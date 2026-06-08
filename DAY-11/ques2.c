#include <stdio.h>
int max(int x,int y);
int main()
{
    int a,b,result;
    printf("Enter the the two numbers");
    scanf("%d %d",&a,&b);
    result=max(a,b);
    printf("Maximum is %d",result);
    return 0;
}
int max(int x,int y)
{
    int max;
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}