//32. Accept 2 numbers and find out its sum check it size
#include<stdio.h>
int main()
{
	int a,b,sum;
	printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
	// Calculate sum of 2 numbers
	sum = a + b;
	printf("Sum of %d and %d is: %d\n",a,b,sum);
	// Check the size of the sum
    printf("Size of the sum (in bytes): %d\n", sizeof(sum));	
	
}
