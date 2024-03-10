//13.WAP to find minimum number among 3 numbers using ternary operator
#include <stdio.h>
int main() 
{
    int num1, num2, num3, min;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    // Find the smallest among the three numbers using if-else statements
    min = (num1 < num2) ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3);	
    // Display the smallest number
    printf("Smallest number: %d\n", min);
}
