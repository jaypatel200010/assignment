//26.Convert temperature Fahrenheit to Celsius
#include<stdio.h>
int main(){
	float fan,cal=0;
	//Fahrenheit value
	printf("enter fan value :");
	scanf("%f",&fan);
	//Calculating celsius from Fahrenheit
	cal=0.55*(fan-32);
	printf("%f",cal);
}
