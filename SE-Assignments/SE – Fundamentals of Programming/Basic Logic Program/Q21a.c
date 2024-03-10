//21.Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable
//a) with using 3rd variable
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    // Swaping the values using three variables.
    c = a;
    a = b;
    b = c;
    printf("After swapping using a third variable:\n");
    printf("First number: %d\n", a);
    printf("Second number: %d\n", b);
}

