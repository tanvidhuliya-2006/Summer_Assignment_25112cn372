#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age");
    scanf("%d",&age);
    if(age<0 || age>100)
    {
        printf("Please enter a realistic age");
    }
    else if(age>=18)
    {
        printf("You are eligible to vote");
    }
    else
    {
        printf("You are not eligible to vote");
    }
    return 0;
}