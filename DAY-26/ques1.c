#include<stdio.h>
#include<stdlib.h>
int main()
{
    int secretnum, guess;
    secretnum=(rand()%100)+1;
    printf("Enter the guess");
    scanf("%d",guess);
    if(guess==secretnum)
    {
        printf("The guess is correct");
    }
    else if(guess<secretnum)
    {
        printf("Too low..try again");
    }
    else
    {
        printf("Too high..try again");
    }
    return 0;
}