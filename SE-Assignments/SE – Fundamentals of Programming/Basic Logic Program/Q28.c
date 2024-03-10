//28.Convert years into days and months
#include<stdio.h>
int main()
{
	int years; 
	float months,days;
	printf("Enter the no of years: ");
	scanf("%d",&years);
	//calculating months based on years
	months = years*12;
	days = months*30.44;
	printf("%d years is equal to %f months and %f days. \n ",years,months,days);
}
