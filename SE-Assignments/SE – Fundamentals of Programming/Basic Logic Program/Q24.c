//24.Accept 5 employees name and salary and count average and total salary
#include<stdio.h>
int main(){
	int emp1,emp2,emp3,emp4,emp5,s1,s2,s3,s4,s5,Total_salary=0,avg_salary=0;
	//Accepting the 5 employee names and salaries.
	printf("Enter emp1 name :");
	scanf("%s",&emp1);
	printf("Enter emp1 salary :");
	scanf("%d",&s1);
	printf("Enter emp2 name :");
	scanf("%s",&emp2);
	printf("Enter emp2 salary :");
	scanf("%d",&s2);
	printf("Enter emp3 name :");
	scanf("%s",&emp3);
	printf("Enter emp3 salary :");
	scanf("%d",&s3);
	printf("Enter emp4 name :");
	scanf("%s",&emp4);
	printf("Enter emp4 salary :");
	scanf("%d",&s4);
	printf("Enter emp5 name :");
	scanf("%s",&emp5);
	printf("Enter emp5 salary :");
	scanf("%d",&s5);
	//Calculating total salary
	Total_salary= s1+s2+s3+s4+s5;
	printf("Total salry is :%d\n",Total_salary);
	//Calculating average salary
	avg_salary=(s1+s2+s3+s4+s5)/5;
	printf("Avg salary is :%d",avg_salary);
}
