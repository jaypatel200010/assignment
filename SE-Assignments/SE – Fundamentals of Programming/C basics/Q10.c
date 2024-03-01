//10.find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include<stdio.h>
int main(){
	float l,w,h,area;
	printf("enter the value of l: ");
	scanf("%f",&l);
	printf("enter the value of w: ");
	scanf("%f",&w);
	printf("enter the value of h: ");
	scanf("%f",&h);
	area=2*((w*l)+(h*l)+(h*w));
	printf("area of rectangular prism is: %f\n",area);
	
}
