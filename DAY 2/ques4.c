#include <stdio.h>
int main()
{
    int n,rev=0;
    printf("Enter the number");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        int d=n%10;
        rev=(rev*10)+d;
        n=n/10;
    }
    if(rev==n)
    {
        printf("Number is palindrome");
    }
    else
    {
        printf("Number is not palindrome");
    }
    return 0;
}