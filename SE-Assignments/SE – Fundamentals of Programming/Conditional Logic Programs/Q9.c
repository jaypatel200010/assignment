//9. C Program to Check Uppercase or Lowercase or Digit or Special Character
#include<stdio.h>
int main(){
	char ch;
	printf("Enter a character to Check Uppercase or Lowercase or Number or Special Character:");
	scanf("%c",&ch);
	//uppercase A to Z
	if(ch >= 'A' && ch <= 'Z'){
		printf("%c is an Uppercase letter.",ch);
	}
	//lowercase a to z
	else if(ch >= 'a' && ch <= 'z'){
		printf("%c is an Lowercase letter.",ch);
	}
	//numbers 0 to 9
	else if(ch >= '0' && ch <= '9'){
		printf("%c is a number.",ch);
	}
	//Special Character
	else{
		printf("%c is a Special Character.",ch);
	}
}
