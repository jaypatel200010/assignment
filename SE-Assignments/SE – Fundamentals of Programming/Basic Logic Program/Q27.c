//27.Convert days into months
#include<stdio.h>
int main()
{
	int days; 
	float months;
	printf("Enter the days: ");
	scanf("%d",&days);
	//calculating months based on days
	months = days /30.44;
	printf("%d days = %f months.\n", days, months);
}
