//18.Calculate person’s Annual salary
#include<stdio.h>
int main(){
	int HS,WHPW,NWPY=52,Annual_incm=0;
	//Hourly pay
	printf("enter the salary paid hourly:");
	scanf("%d",&HS);
	//Working hours per week
	printf("enter the No of hours you work per week:");
	scanf("%d",&WHPW);
	//Calculating annual income
	Annual_incm = HS*WHPW*NWPY;
	printf("Your Annual income is: %d",Annual_incm);
}
