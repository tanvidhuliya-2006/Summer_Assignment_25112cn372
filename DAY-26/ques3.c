#include<stdio.h>
int main()
{
    int pin=1234;
    int balance=20000;
    int enteredpin,choice,amt;
    printf("Enter the pin");
    scanf("%d",enteredpin);
    if(enteredpin == pin)
    {
        printf("Correct pin.Access allowed");
        printf("1. Check balance\n");
        printf("2. Cash deposit\n");
        printf("3. Cah withdrawl\n");
        printf("4. exit\n");
        printf("Please enter your choice(1-4): ");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("\nYour current balance is %d :",balance);
        }
        else if(choice==2)
        {
            printf("\nEnter amount to deposit:");
            scanf("%d",&amt);
            if(amt>0)
            {
                balance=balance+amt;
                printf("Successfully deposited %d ",amt);
                printf("Your new balance is %d: ",balance);
            }
            else
            {
                printf("Invalid deposit amount \n");
            }
        }
        else if(choice==3)
        {
            printf("\nEnter amount to withdraw: ");
            scanf("%d",&amt);
            if(amt>balance)
            {
                printf("Transaction failed");
            }
            else
            {
                balance=balance-amt;
                printf("Please collect the cash of %d ",amt);
                printf("Your new balance is %d ",balance);
            }
        }
        else if(choice==4)
        {
            printf("\nThankyou for using our ATM\n");
        }
        else
        {
            printf("\nInvalid choice\n");
        }
    }
    else
    {
        printf("Access denied. Incorrect pin");
    }
    return 0;

}