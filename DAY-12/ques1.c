#include <stdio.h>
int palin(int x);
int main()
{
    int a,result;
    printf("Enter the number");
    scanf("%d",&a);
    result=palin(a);
    if(result==1)
    {
        printf("%d is palindrome",a);
    }
    else
    {
        printf("%d is not palindrome",a);
    }
}
int palin(int x)
{
     int rev=0; int n=x;
     int i=0;
     while(x>0)
     {
        int d=x%10;
        rev=rev*10+d;
        x=x/10;
     }
     if(rev==n)
     {
        return 1;
     }
     else
     {
        return 0;
     }
}