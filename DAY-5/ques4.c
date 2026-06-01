#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the number");
    scanf("%d",&n);
    printf("Largest prime factor of %d is",n);
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            n=n/i;
            i--;
        }
    }
    printf("%d",i);
    return 0;
}

