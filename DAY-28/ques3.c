#include<stdio.h>
#include<string.h>
int main()
{
    int seats[10];
    int choice=0;
    int seatNumber=0;
    int i;

    while(1)
    {
        printf("\n1. View available seats");
        printf("\n2. Book ticket");
        printf("\n3. Cancel a ticket");
        printf("\n4. Exit");
        printf("Enter your choice (1-4)");
        scanf("%d ",&choice);

        if(choice==1)
        {
            printf("\nSeat available map");
            for(i=0;i<10;i++)
            {
                if(seats[i]==0)
                {
                    printf("Seat %d available \n", i+1);
                }
                else
                {
                    printf("Seat %d booked \n", i+1);
                }
            }
        }
        else if(choice==2)
        {
            printf("\nEnter seat number to book(1-10)");
            scanf("%d ",&seatNumber);

            if(seatNumber<1 || seatNumber>10)
            {
                printf("Error Invalid seat number");
            }
            else if(seats[seatNumber-1]==1)
            {
                printf("Error seat %d is already occupied\n",seatNumber);
            }
            else
            {
                seats[seatNumber-1]=1;
                printf("Success ticket booked for seat %d \n",seatNumber);
            }
        }
        else if(choice==3)
        {
            printf("\nEnter seat number to cancel (1-10)");
            scanf("%d ",&seatNumber);

            if(seatNumber<1 || seatNumber>10)
            {
                printf("Error invalid seat number");
            }
            else if(seats[seatNumber-1]==0)
            {
                printf("Error seat %d is not booked yet\n",seatNumber);
            }
            else
            {
                seats[seatNumber-1]=0;
                printf("Success ticket reservation for seat %d has been canceled\n",seatNumber);
            }
        }
        else if(choice==4)
        {
            printf("\nThank you");
            break;
        }
        else
        {
            printf("Error invalidmenu selection");
        }
    }
    return 0;
}