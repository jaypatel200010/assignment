//21.Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable
//b) without using 3rd variable
#include<stdio.h>
int main() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    //Swaping the values without using third variables.
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAfter swapping without using a third variable:\n");
    printf("First number: %d\n", a);
    printf("Second number: %d\n", b);
}
