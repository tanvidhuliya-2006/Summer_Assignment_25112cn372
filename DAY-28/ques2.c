#include<stdio.h>
#include<string.h>
int main()
{
    int choice;
    float balance=0.0;
    float amount=0.0;

    printf("\n1. Check balance\n");
    printf("\n2. Deposit money\n");
    printf("\n3. Withdraw money\n");
    printf("\n4. Exit\n");
    
    printf("Enter your choice (1-4)");
    scanf("%d",&choice);

    if(choice==1)
    {
        printf("Enter amount to deposit");
        scanf("%d ",&amount);

        if(amount>0)
        {
            balance+=amount;
            printf("Successfully deposited %f  New balance %f\n",amount,balance);
        }
        else
        {
            printf("Invalid deposit amount");
        }
    }
    else if(choice==3)
    {
        printf("Enter amount to withdraw");
        scanf("%f",&amount);

        if(amount>0 && amount<=balance)
        {
            balance=balance-amount;
            printf("Successfully withdrew %f . New balance %f\n",amount,balance);
        }
        else if(amount>balance)
        {
            printf("Transaction failed");
        }
        else
        {
            printf("Invalid withdrawal");
        }
    }
    else if(choice==4)
    {
        printf("Thank you for using our bank\n");
    }
    else
    {
        printf("Invalid choice.");
    }
    return 0;
    
}