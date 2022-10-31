#include<stdio.h>
#include<conio.h>
#define SIZE 100
int main()
{
    int array[SIZE]={0},i;
    int num=0,value=0,book=0;
    printf ("To select seat: ");
    printf ("Type 1 for \"First Class\" ");
     printf (" or Type 2 for \"Economy Class\": ");
    do
    {
        scanf ("%d",&num);
         if (num!=1 && num!=2)
        {
            printf ("\nYou did not enter valid input. Type 1 to book first class ticket Type 2 to book economy class ticket: ");
        }

    }while (num!=1 && num!=2);
    if(num==1){
	
        printf ("\nFirst class ticket will be reserved.");
        printf (" Kindly enter your seat number.\n");
        printf ("Enter the seat number(1-30): ");
        scanf ("%d",&value);
        array[value]=value;
    }
    else{
    	
        printf ("\nEconomy class ticket will be reserved.");
        printf (" \nKindly enter your seat number.\n");
        printf ("Enter the seat number(31-100): ");
        scanf ("%d",&value);
        array[value]=value;
	}
        for ( i=1;i<SIZE;i++)
        {
            if (value==array[i])
            {
                printf ("\nSeat \"%d\" is vacant.\n\nWould you like to book it? 0/1",value);
                printf ("\n\nPress 1 to book it.\nPress 0 to cancel it\n 0/1: ");
                scanf ("%d",&book);
                if (book==1)
                {
                    array[value]=value;
                    printf ("\nSeat \"%d\" is booked.",array[i]);
                }
                else if (book==0)
                {
                    printf("\nSeat not booked");
                }

            }
        }
        printf ("\n");
        return 0;
    
}
