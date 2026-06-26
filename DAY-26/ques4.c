#include<stdio.h>
int main()
{
    int a,score=0;
    printf("\n1. Who painted the famous Mona Lisa?\n");
    printf("1. Vincent van Gogh\n 2. Pblo Picasso\n 3. Leonardo da Vinci\n");
    printf("Enter your answer: ");
    scanf("%d",&a);
    if(a==3)
    {
        score++;
    }
    printf("\n2. What is the capital of India?\n");
    printf("1. Mumbai\n 2. Delhi\n 3.Lucknow\n");
    printf("Enter your answer: ");
    scanf("%d",&a);
    if(a==2)
    {
        score++;
    }
    printf("\n3. How many days are there in a week?\n");
    printf("1.5\n 2. 6\n 3. 7\n");
    printf("Enter your answer: ");
    scanf("%d",&a);
    if(a==3)
    {
        score++;
    }

    printf("Your score s %d out of 3\n",score);
    if(score==3)
    {
        printf("Excellent");
    }
    else
    {
        printf("Better luck next time");
    }
    return 0;

}