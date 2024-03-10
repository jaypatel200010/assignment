//7. Accept marks from user and check pass or fail
#include <stdio.h>
int main() 
{
	int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);
    //condition pass or fail
    if(marks>=50){
    	printf("Congratulations! You have passed.\n");
	}
	else{
		printf("Failed!\n");
	}
}
