#include <stdio.h>
int main()
{
    int n,pow;
    printf("Enter the number");
    scanf("%d",&n);
    printf("Enter the power");
    scanf("%d",pow);
    int found=1;
    for(int i=1;i<pow;i++)
    {
        found=found*n;
    }
    printf("%d raised to the power %d is %d",n,pow,found);
    return 0;
}