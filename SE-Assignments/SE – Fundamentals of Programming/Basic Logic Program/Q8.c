//8. Find circumference(perimeter) of Rectangle formula : 2(l+w)
#include<stdio.h>
int main(){
	float l,w,circumference;
	printf("enter the value of l: ");
	scanf("%f",&l);
	printf("enter the value of w: ");
	scanf("%f",&w);
//	circumference(perimeter) of Rectangle
	circumference=2*(l+w);
	printf("circumference of Rectangle is: %f\n",circumference);
	
}
