//2. Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)
#include<stdio.h>
int main(){
	char opt;
	int n1,n2;
	double res;
	
	printf("choose the operation from (/,*,+,-): ");
	scanf("%c",&opt);
	printf("choose num1: ");
	scanf("%d",&n1);
	printf("choose num2: ");
	scanf("%d",&n2);
	
	if(opt == '/')
	{
		if(n2==0)
		{
		printf("denominator cannot be 0");
		scanf("%d",&n2);
	    }	
	    res = n1/n2;
	    printf("division of %d and %d is: %lf\n",n1,n2,res);
	}
	
	else if(opt == '*'){
		res = n1*n2;
		printf("multiplication of %d and %d is: %lf\n",n1,n2,res);
	}
	
	else if(opt == '+'){
		res = n1+n2;
		printf("addition of %d and %d is: %lf\n",n1,n2,res);
	}
	
	else if(opt == '-'){
		res = n1-n2;
		printf("subtraction of %d and %d is: %lf\n",n1,n2,res);
	}
	else{
		printf("please check entered values");
	}
	return 0;
}
