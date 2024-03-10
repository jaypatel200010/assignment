//12.Accept number of students from user. I need to give 5 apples to each student. How many apples are required?
#include<stdio.h>
int main(){
	int s,apples;
	//No of students
	printf("enter the no of students: ");
	scanf("%d",&s);
	//Total apples required
	apples=5*s;
	printf("apples required: %d\n",apples);
	
}
