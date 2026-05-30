#include <stdio.h>
int main()
{
    int N,sum=0;
    printf("Enter the number");
    scanf("%d",&N);
    for(int i=0;i<=N;i++)
    {
        sum=sum+i;
    }
    printf("Sum is %d",sum);
    return 0;
}