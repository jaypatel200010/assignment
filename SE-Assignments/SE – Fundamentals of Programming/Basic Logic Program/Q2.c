//2. Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)
#include<stdio.h>
int main()
{
	int num1,num2,result;
	//Accept 2 numbers 
	printf("Enter first number:");
	scanf("%d",&num1);
	printf("Enter second number:");
	scanf("%d",&num2);
	//addition 
	result=num1+num2;
	printf("addition =%d \n",result);
	//subtraction 
	result=num1-num2;
	printf("subtraction =%d \n",result);
	//multiplication 
	result=num1*num2;
	printf("multiplication =%d \n",result);
	//division 
	result=num1/num2;
	printf("division =%d \n",result);
	//modulo 
	result=num1%num2;
	printf("modulo =%d \n",result);
}
