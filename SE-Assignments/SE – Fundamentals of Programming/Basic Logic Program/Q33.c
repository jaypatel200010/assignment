//33. C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include<stdio.h>
int main()
{
	int num, p1, p2, p3;
    printf("Enter an integer: ");
    scanf("%d", &num);
    // Calculate the powers (N^1, N^2, N^3)
    p1 = num;
    p2 = num * num;
    p3 = num * num * num;
    printf("First Power (N^1): %d\n", p1);
    printf("Second Power (N^2): %d\n", p2);
    printf("Third Power (N^3): %d\n", p3);
}
