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
    printf("Reverse of number is %d",rev);
    return 0;
}