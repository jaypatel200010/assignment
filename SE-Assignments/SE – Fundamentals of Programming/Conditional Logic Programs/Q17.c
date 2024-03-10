//17.Write a C program to check whether a triangle can be formed with the given
//values for the angles.
# include<stdio.h>

int main()
{
	int a,b,c;	
	printf("Enter the first angle of triangle:");
	scanf("%d",&a);	
	printf("Enter the second angle of triangle:");
	scanf("%d",&b);	
	printf("Enter the third angle of triangle:");
	scanf("%d",&c);	
	//check whether triangle can be formed or not
	if(a + b + c == 180){
		printf("A triangle can  formed with the given value.");
	}
	else{
		printf("A triangle can not formed with the given value.");
	}
}

