//11.WAP to find number is even or odd using ternary operator
#include <stdio.h>
int main(){
	int num;
    printf("Enter the number :");
    scanf("%d",&num);
    //even or odd using ternary operater 
    (num % 2==0)?(printf("Even number: %d\n", num)):(printf("Odd number: %d\n", num));
}
