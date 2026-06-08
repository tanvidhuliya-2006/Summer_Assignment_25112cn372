#include <stdio.h>
int fact(int x);
int main()
{
    int a,result;
    printf("Enter the number");
    scanf("%d",&a);
    result=fact(a);
    printf("Fctorial is %d",result);
    return 0;
}
int fact(int x)
{
    int fact=1;
    for(int i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;
}