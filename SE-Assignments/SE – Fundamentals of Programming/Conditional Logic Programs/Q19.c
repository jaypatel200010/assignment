//19.Write a program in C to calculate and print the electricity bill of a given
//customer. The customer ID, name, and unit consumed by the user should
//be captured from the keyboard to display the total amount to be paid to the
//customer. The charge are as follow :
// Unit                                    Charge/unit
// upto 350                                @1.20
// 350 and above but less than 600         @1.50
// 600 and above but less than 800         @1.80
// 800 and above                           @2.00
#include <stdio.h>
int main(){
    int ID;
    char Name[60];
    float unit, totalAmount;
    // Accept customer details and unit  
    printf("Enter customer ID: ");
    scanf("%d", &ID);
    printf("Enter customer name: ");
    scanf("%s", &Name);
    printf("Enter unit consumed: ");
    scanf("%f", &unit);
    // Calculate the total amount based on the charging criteria
    if (unit <= 350){
        totalAmount = unit * 1.20;
    } 
	else if (unit <= 600){
        totalAmount = unit * 1.50;
    } 
	else if (unit <= 800){
        totalAmount = unit  * 1.80;
    } 
	else{
        totalAmount = unit * 2.00;
    }
    // Display the electricity bill details
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", ID);
    printf("Customer Name: %s\n", Name);
    printf("Unit Consumed: %.2f\n", unit);
    printf("Total Amount to be Paid: Rs. %.2f\n", totalAmount);
}

