#include <stdio.h>
int main()
{
    int rem,bin=0,pow=1, n;
    printf("Enter the  decimal number to convert to binary");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%2;
        bin=bin+rem*pow;
        n=n/2;
        pow=pow*10;
    }
    printf("%d is the binary number",bin);
    return 0;
}