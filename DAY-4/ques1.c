#include <stdio.h>
int main()
{
    int n,a,b,c;
    printf("Enter the number of terms");
    scanf("%d",&n);
        a=0,b=1,c=0;
        for(int i=1;i<=n;i++)
        {
            printf("%d",c);

            a=b;
            b=c;
            c=a+b;
        
        }
        return 0;
    }