//26. WAP to show
//i. Monday to Sunday using switch case
#include <stdio.h>
int main() {
    int dayNumber;
    printf("Enter the day number: ");
    scanf("%d", &dayNumber);
    // Check if the entered day number is valid
    if (dayNumber >= 1 && dayNumber <= 7){
        // find the day of the week 
        switch (dayNumber) 
		{
            case 1:
                printf("Monday");
                break;
            case 2:
                printf("Tuesday");
                break;
            case 3:
                printf("Wednesday");
                break;
            case 4:
                printf("Thursday");
                break;
            case 5:
                printf("Friday");
                break;
            case 6:
                printf("Saturday");
                break;
            case 7:
                printf("Sunday");
                break;
            default:
                break;
        }
    } 
	else {
        printf("Please enter a number between 1 and 7.");
    }
}
