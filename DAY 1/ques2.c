#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    for(int i=0;i<=10;i++)
    {
        printf("%d*%d=%d",n,i,n*i);
    }
    return 0;
}