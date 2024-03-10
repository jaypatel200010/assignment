//1. Write a C program to accept two integers and check whether they are equal or not
#include<stdio.h>
int main(){
int a,b;
// Accept two integers
printf("Enter integer 1 :");
scanf("%d",&a);
printf("Enter integer 2 :");
scanf("%d",&b);
//check whether integers are equal or not
if(a == b){
	printf("Equal");
}
else{
	printf("Not equal");
}
}
