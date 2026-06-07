#include <stdio.h>
int revdigit(int x);
int rev=0;
int main()
{
    int n,result=0;
    printf("Enter the number");
    scanf("%d",&n);
    result=revdigit(n);
    printf("Reverse of number is %d",result);
}
int revdigit(int x)
{
    int d=0;
    if(x>0)
    {
        d=x%10;
        rev=(rev*10)+d;
        revdigit(x/10);
    }
    else
    {
        return(rev);
    }
}