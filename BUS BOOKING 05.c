#include <stdio.h>
#include <string.h>

int main() {
    char user[20];
    char firstname[20];
    char lastname[20];
    char name[20];
    int phonenumber;
    int choice;
    int number;
    int num;
    int password;
    int opp;
    int busnumber;
    int seatnumber;

    printf("======= WELCOME TO MAKUTESA BUS RESERVATION SYSTEM========\n");
    printf("----------------------------------------------------------------------------------------------\n");
    printf("\tView your category\n");
    printf("\t\t1: Employee\n");
    printf("\t\t2: Customer\n");
    printf("\tEnter your position: ");
    scanf("%d", &choice);

      switch (choice) {
        case 1:
            printf("\n=======================  LOGIN FORM  =======================\n");
            printf("\nEnter your Username:");
            scanf("%s", user);
            printf("\nPassword::");
            scanf("%d", &number);
            
          start:
            if (number >= 10 && number <= 15) {
                printf("\n\n\n====================================== WELCOME TO BUS RESERVATION SYSTEM ======================================\n\n\n");
                printf("\t\t\t\t\t[1]=> View Bus List\n");
                printf("\n");
                printf("\t\t\t\t\t[2]=> Cancel Booking\n");
                printf("\n");
                printf("\t\t\t\t\t[3]=> Bus Status Board\n");
                printf("\n");
                printf("\t\t\t\t\t[4]=> Exit\n\n");
                printf("===============================================================================================================\n\n");
                printf("\t\t\tEnter Your Choice:: ");
                scanf("%d", &num);

                switch (num) {
                    case 1:
                        printf("-----------------------------------------------------------------------------------------------------------");
                        printf("\n BUS.No\t\t\tName\t\t\t\tDestinations\t\t\tCharges\t\tTime\t\t\tNo of Seats\n");
                        printf("------------------------------------------------------------------------------------------------------------");
                        printf("\n1:101\t Super Metro\t\t\t\t Kamulu to Bus Station\tksh.1200\t\t9am\t\t50");
                        printf("\n2:102\tLothian Travellers\t Nairobi To Thika\t \t\tksh.1500\t\t12pm\t\t50");
                        printf("\n3:103\tLopha Travellers\t\t CBD to Juja\t\t\t\t   ksh.1000\t\t 8am\t\t50");
                        printf("\n4:104\tMetro Trans \t Rongai to Railways \t ksh.1500\t\t11am\t\t50");
                        printf("\n5:105\tForward Travellers\t OTC to Kayole\tksh.1000\t\t7am\t\t50");
                        printf("\n6:106\tUmoinner Sacco\t Umoja To Cbd\t ksh.1000\t\t 9.30am\t\t50");
                        printf("\n7:107\tModern Coach\t Kitengela to Commercial\tksh.500\t\t\t1pm\t\t50\n");
                        goto start;  
                        break;

                    case 2:
                        printf("\t\tEnter the first  name of the customer to cancell the ticket:");
                        scanf("%s", firstname);
                        printf("\t\tEnter the last  name of the customer to cancell the ticket:");
                         scanf("%s", lastname);
                        printf("\t\tEnter the seat number:");
                        scanf("%d", &seatnumber);

                        if (seatnumber >= 1 && seatnumber <= 50) {
                            printf("\n\n\t\t The seat number for %s %s, has been cancelled successfully", firstname, lastname, seatnumber);
                        } else {
                            printf("\nInvalid seat number! Seats range from 1 to 50.");
                        }
                        break;

                    case 3:
                        
                           printf(" Super Metro 101 good condition\n");
                           printf("LothianTravellers 102 good  condition\n");
                            printf("Lopha Travellers  103 good  condition\n");
                            printf("Metro Trans 104 good  condition\n");
                             printf(" Forward Travellers 105 good  condition\n");
                            printf("Umoinner sacco 106 good  condition\n");
                            printf(" Modern Coach 107 good condition");
                            
                        break;

                    case 4:
                        printf("Exiting the program\n");
                        break;

                    default:
                        printf("Invalid choice. Please enter a valid option.\n");
                        break;
                }
            } else {
                printf("Invalid password! Access denied.\n");
            }
            break;

        case 2:
            printf("\n\n\t\tEnter your first name:");
            scanf("%s", firstname);
            printf("\n\n\t\tEnter your last name:");
            scanf("%s", lastname);
            printf("\n\n\t\tEnter your phone number");
            scanf("%d", &phonenumber);
            printf("\n\n\t\tEnter the common password (1075): ");
            scanf("%d", &password);
            
            start1:
            if (password == 1075) {
                printf("\n===========================================================================\n");
                printf("\t\t\t\t  BUS RESERVATION SYSTEM\n");
                printf("\n===========================================================================\n");
                printf("\t\t\t1>> View All Available buses\n");
                printf("\t\t\t2>> Book a ticket\n");
                printf("\t\t\t3>> Cancel booking\n");
                printf("\t\t\t4>> Exit\n");
                printf("\t\t\t\t\tEnter your choice: ");
                scanf("%d", &opp);

                switch (opp) {
                    case 1:
                        printf("-------------------------------------------------------------------------------------------------------");
                        printf("\n BUS.No\t\tName\t\t\tDestinations\t\tCharges\t\tTime\t\tNo of Seats\n");
                        printf("-------------------------------------------------------------------------------------------------------");
                        printf("\n1:101\tSuper Metro\t\t Kamulu to Bus Station\tksh.1200\t\t9am\t\t50");
                        printf("\n2:102\tLothian Travellers\tNairobi To Thika\tksh.1500\t\t12pm\t\t50");
                        printf("\n3:103\tLopha Travellers\tCBD to Juja\t\t  ksh.1000\t\t 8am\t\t50");
                        printf("\n4:104\tMetro Trans \t\tRongai to Railways\tksh.1500\t\t11am\t\t50");
                        printf("\n5:105\tForward Travellers\t OTC to Kayole\t\tksh.1000\t\t7am\t\t50");
                        printf("\n6:106\tUmoinner Sacco\t\t Umoja To Cbd\t\t ksh.1000\t\t 9.30am\t\t50");
                        printf("\n7:107\tModern Coach\t\t Kitengela to Commercial\tksh.500\t\t1pm\t\t50\n");
                        goto start;  
                        break;

					   printf("\t\t\t\t\t\n");
                        goto start1;
                        break;


                    case 2:
                    
                        printf("\n\n\t\tEnter bus number: ");
                        scanf("%d", &busnumber);
                        printf("\n\n\t\tEnter the seat number: ");
                        scanf("%d", &seatnumber);

                        if (seatnumber >= 1 && seatnumber <= 50) {
                            printf("\n\nt\t\t%s %s, your seat number %d has been booked successfully", firstname, lastname, seatnumber);
                        } else {
                            printf("\nInvalid seat number! Seats range from 1 to 50.");
                        }
                        break;

                    case 3:

                        printf("\n\n\t\tEnter your first name:");
                        scanf("%s", firstname);
                        printf("Enter your phone number: ");
                        scanf("%d", &phonenumber);
                        printf("\n\nTicket cancellation for %s with phone number %d has been canceled successfully\n", firstname, phonenumber);
                        break;

                    case 4:
                    	
                        printf("Exiting the program\n");
                        break;

                    default:
                        printf("Invalid choice. Please enter a valid option.\n");
                        break;
                }
            } else {
                printf("Invalid password! Access denied.\n");
            }
            break;

        default:
            printf("Invalid category! Please choose either 1 (Employer) or 2 (Customer).\n");
            break;
    }
 

    return 0;
}