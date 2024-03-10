//10.WAP to check whether a number is negative, positive or zero.
#include<stdio.h>
int main(){
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	//check whether a number is negative, positive or zero.
	if(num>0){
		printf("Number is Positive");
	}
	else if(num<0){
		printf("Number is Negative");
	}
	else{
		printf("Number is Zero");
	}
}
