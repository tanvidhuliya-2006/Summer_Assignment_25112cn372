#include <stdio.h>
int main()
{
    int n,pro=1;
    printf("Enter the number");
    scanf("%d",&n);
    for(int i=0,i<=n;i++)
    {
        pro=i*n;
        printf("multipication is %d",pro);
    }
    return 0;
}