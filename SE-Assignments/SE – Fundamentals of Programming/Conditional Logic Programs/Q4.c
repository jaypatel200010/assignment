//4. WAP to make simple calculator (operation include Addition, Subtraction,
//Multiplication, Division, modulo) using conditional statement
#include<stdio.h>
int main(){
	char opt;
	int n1,n2;
	double res;
	//choice.
	printf("choose the operation from (/,*,+,-,%): ");
	scanf("%c",&opt);
	printf("choose num1: ");
	scanf("%d",&n1);
	printf("choose num2: ");
	scanf("%d",&n2);
	// division
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
	//Multiplication
	else if(opt == '*'){
		res = n1*n2;
		printf("multiplication of %d and %d is: %lf\n",n1,n2,res);
	}
	//Addition
	else if(opt == '+'){
		res = n1+n2;
		printf("addition of %d and %d is: %lf\n",n1,n2,res);
	}
	//Substraction
	else if(opt == '-'){
		res = n1-n2;
		printf("subtraction of %d and %d is: %lf\n",n1,n2,res);
	}
	//Modulo
	else if(opt == '%'){
		res = n1%n2;
		printf("modulo of %d and %d is: %lf\n",n1,n2,res);
	}
	//If entered invalid value.
	else{
		printf("please check entered values");
	}
	return 0;
}
