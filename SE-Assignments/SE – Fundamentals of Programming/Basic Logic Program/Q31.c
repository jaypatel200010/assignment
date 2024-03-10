//31. Convert kilometers into meters
#include<stdio.h>
int main(){
	float kms,meters;
	printf("Enter kilometers :");
	scanf("%f",&kms);
	meters = 1000*kms;
	printf("%f kilometers = %f meters. \n",kms,meters);
}
