#include <stdio.h>
int main()
{
    int n,rev;
    printf("Enter the number");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        int d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(rev==n)
    {
        printf("Number is palindrome %d",n);
    }
    else
    {
        printf("Number is not palindrome %d",n);
    }
    return 0;
}