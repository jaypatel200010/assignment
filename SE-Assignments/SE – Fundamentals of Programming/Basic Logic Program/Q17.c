//17. Calculate person’s insurance premium based on salary
#include<stdio.h>
int main(){
	int income,ytr,cover=0;
	// Annual salary
	printf("enter the current annual income:");
	scanf("%d",&income);
	//Years left in retirement.
	printf("enter the years left to retirement:");
	scanf("%d",&ytr);
	//person’s insurance premium based on salary
	cover = income*ytr;
	printf("insurance cover needed is: %d",cover);
}
