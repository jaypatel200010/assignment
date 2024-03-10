//22. WAP to input the week number and print week day.
#include <stdio.h>
int main(){
    int weekNumber;
    char weekDay;
    // Accept week no
    printf("Enter the week number: ");
    scanf("%d", &weekNumber);
    //condition: Check if the entered week number is valid
    if (weekNumber >= 1 && weekNumber <= 7) 	
	{
        //switch case: Determine the week day based on the week number
        switch (weekNumber) 
		{
            case 1:
                printf("sunday");
                break;
            case 2:
                printf("Monday");
                break;
            case 3:
                printf("Tuesday");
                break;
            case 4:
                printf("Wednesday");
                break;
            case 5:
                printf("Thursday");
                break;
            case 6:
                printf("Friday");
                break;
            case 7:
                printf("Saturday");
                break;
            default:
                break;
        }
    } 
	else 
	{
        printf("Please enter a number between 1 and 7.\n");
    }
}

