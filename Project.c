#include<stdio.h>
#include<conio.h>
void main()
{
    int pass,booked,seat;
    char user[500],Name,movie[20];
    printf("Enter the name:");
    scanf("%c",&Name);
    gets(user);
    printf("\n Enter the password to open the booking system:");
    scanf("%d",&pass);
    printf("\nEnter the movie name:");
    scanf(" %s",movie);
    switch(pass)
    {
        case 2004:
        printf("\n\t\t\t\t Welcome to the Movie ticket booking system\n");
        printf("\n\t\t\t\t Total available seats = 12\t Booked seat=0\n");
        printf("\n\t\t\t\t Enter 1 for Booking the seat \t  Press any keyword for cancelation \n");
        printf("Enter what you want.....\t---==>");
        scanf("%d",&seat);
        switch(seat)
        {
            case 1:
            printf("\n \t\t\t\t Select your seat number\n");
            printf("\n \t\t\t\t 1\t 2\t 3\t \n\n \t\t\t\t 4\t 5\t 6\t \n\n \t\t\t\t 7\t 8\t 9\t \n\n \t\t\t\t 10\t 11\t 12\t \n");
            scanf("%d",&booked);
            switch (booked)
            {
                case 1:
                printf("\n \t\t\t\t %s,Booked seat number is 1 \n",user);
                printf("\n \t\t\t\t Booked movie is %s",movie);
                printf("\n \t\t\t\t Seats Available = 11 Booked seat = 1\n");
                break;
                case 2:
                printf("\n \t\t\t\t %s,Booked seat number is 2\n",user);
                printf("\n \t\t\t\t Booked movie is %s",movie);
                printf("\n \t\t\t\t Seats Available =  11 Booked seat = 1\n");
                break;
                case 3:
                printf("\n \t\t\t\t %s,Booked seat number is 3\n",user);
                printf("\n \t\t\t\t Booked movie is %s",movie);
                printf("\n \t\t\t\t Seats Available = 11 Booked seat = 1\n");
                break;
                case 4:
                printf("\n \t\t\t\t %s,Booked seat number is 4\n",user);
                printf("\n \t\t\t\t Booked movie is %s",movie);
                printf("\n \t\t\t\t Seats Available = 11 Booked seat = 1\n");
                break;
                case 5:
                printf("\n \t\t\t\t %s,Booked seat number is 5\n",user);
                printf("\n \t\t\t\t Booked movie is %s",movie);
                printf("\n \t\t\t\t Seats Available = 11 Booked seat = 1\n");
                break;
                case 6:
                printf("\n \t\t\t\t %s,Booked seat number is 6\n",user);
                printf("\n \t\t\t\t Booked movie is %s",movie);
                printf("\n \t\t\t\t Seats Available = 11 Booked seat = 1\n"); 
                break;
                case 7:
                printf("\n \t\t\t\t %s,Booked seat number is 7\n",user);
                printf("\n \t\t\t\t Booked movie is %s",movie);
                printf("\n \t\t\t\t Seats Available = 11 Booked seat = 1\n");
                break;
                case 8:
                printf("\n \t\t\t\t %s,Booked seat number is 8\n",user);
                printf("\n \t\t\t\t Booked movie is %s",movie);
                printf("\n \t\t\t\t Seats Available = 11 Booked seat = 1\n");
                break;
                case 9:
                printf("\n \t\t\t\t %s,Booked seat number is 9\n",user);
                printf("\n \t\t\t\t Booked movie is %s",movie);
                printf("\n \t\t\t\t Seats Available = 11 Booked seat = 1\n");
                break;
                case 10:
                printf("\n \t\t\t\t %s,Booked seat number is 10\n",user);
                printf("\n \t\t\t\t Booked movie is %s",movie);
                printf("\n \t\t\t\t Seats Available = 11 Booked seat = 1\n");
                break;
                case 11:
                printf("\n \t\t\t\t %s,Booked seat number is 11\n",user);
                printf("\n \t\t\t\t Booked movie is %s",movie);
                printf("\n \t\t\t\t Seats Available = 11 Booked seat = 1\n");
                break;
                case 12:
                printf("\n \t\t\t\t %s,Booked seat number is 12\n",user);
                printf("\n \t\t\t\t Booked movie is %s",movie);
                printf("\n \t\t\t\t Seats Available = 11 Booked seat = 1\n");
                break;
        default:
        printf("\n \t\t\t\t Seat number not available");
        }
    printf("Movie ticket successfully booked.");
            
        }

}
}

