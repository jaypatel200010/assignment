//3. WAP to Find Area And Circumference of Circle
#include<stdio.h>
int main(){
	float pi=3.14159265359,r,area,circumference;
	printf("enter the value of r: ");
	scanf("%f",&r);
	//Calculation of Area of Circle
	area=pi * r * r;
	printf("area of circle is: %f\n",area);
	//Calculation of Circumference of Circle
	circumference=2*pi*r;
	printf("circumference of circle is: %f\n",circumference);
}
