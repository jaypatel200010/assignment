//5. Check Number Is Positive or Negative
#include<stdio.h>
int main(){
	int a;
	printf("Enter the no :");
	scanf("%d",&a);
	// check whether number is +ve or -ve
	if(a>=0){
		printf("Entered number is positive");
	}
	else{
		printf("Entered number is negative");
	}
}
