//22. Calculate compound interest (Compound Interest formula:
//a. Formula to calculate compound interest annually is given by:
//Amount= P(1 + R/100)t
//b. Compound Interest = Amount – P
#include <stdio.h>
int main(){
	float Amount=0,P,R,t,CI=0;
	printf("enter P :");
	scanf("%f",&P);
	printf("enter R :");
	scanf("%f",&R);
	printf("enter t :");
	scanf("%f",&t);
	//Calculating the total amount
	Amount= P*(1 + R/100)*t;
	//Calculating Compound interest.
	CI= Amount-P;
	printf("CI is :%f",CI);
}
