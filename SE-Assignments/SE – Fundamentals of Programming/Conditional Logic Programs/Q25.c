//25. Write a C program to input electricity unit charges and calculate total 
//electricity bill according to the given condition:
//For first 50 units Rs. 0.50/unit
//For next 100 units Rs. 0.75/unit
//For next 100 units Rs. 1.20/unit
//For unit above 250 Rs. 1.50/unit
//An additional surcharge of 20% is added to the bill
#include <stdio.h>
int main(){
   
    int units;
    float totalBill;
    // Input electricity unit charges from the user
    printf("Enter the electricity unit charges: ");
    scanf("%d", &units);
    //total electricity bill based on the given conditions
    if (units <= 50) {
        totalBill = units * 0.50;
    } 
    else if (units <= 150) 
    {
        totalBill = units * 0.75;
    } 
    else if (units <= 250) 
    {
        totalBill = units  * 1.20;
    } 
    else 
    {
        totalBill = units * 1.50;
    }    
    //surcharge of 20%
    totalBill *= 1.20;
    printf("Total Electricity Bill: Rs. %.2f\n", totalBill);
}
