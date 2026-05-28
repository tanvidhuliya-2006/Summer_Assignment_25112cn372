#include <stdio.h>
int main()
{
    int n,c=0;
    printf("Enter the number");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
       int d=n%10;
       c++;
       n=n/10;

    }
    printf("Count of digits is %d",c);
    return 0;
}