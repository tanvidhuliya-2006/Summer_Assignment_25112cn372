#include <stdio.h>
int main()
{
    int a,b,n,c=0;
    printf("Enter the range in a and b");
    scanf("%d %d",&a,&b);
    printf("Enter the number");
    scanf("%d",&n);
    for(int i=a;i<=b;i++)
    {
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            printf("Number is prime %d",n);
        }
    }
    return 0;
}