#include <stdio.h>
int main()
{
    int n,pro=1;
    printf("Enter the number");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        int d=n%10;
        pro=pro*d;
        n=n/10;
    }
    printf("Product of digits is %d",pro);
    return 0;
}