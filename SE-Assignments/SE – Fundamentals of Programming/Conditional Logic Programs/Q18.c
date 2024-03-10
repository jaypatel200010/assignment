//18. Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
int main(){
	int cp,sp,profit;	
	printf("Enter the cost price:");
	scanf("%d",&cp);	
	printf("Enter the selling price:");
	scanf("%d",&sp);	
	//finding profit
	profit = sp - cp;		
	//condition: to find profit or loss
	if(profit > 0){
		printf("Profit: %d\n", profit);
	}
	else{
		printf("Loss: %d\n", profit);
	}
}
