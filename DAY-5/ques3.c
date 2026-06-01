#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter the number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("Factors are:%d",i);
        }
        
    }
    return 0;
}