//6. Find the Character Is Vowel or Not
#include <stdio.h>
int main() 
{
	char ch;
    printf("Enter any Character:");
    scanf("%c",&ch);
    // declaration of vowels
    if ((ch == 'a' || ch == 'A') || (ch == 'e' || ch == 'E') || (ch == 'i' || ch == 'I') || (ch == 'o' || ch == 'O') || (ch == 'u' || ch == 'U'))
    {
    	printf("%c is Vowel",ch);
	}
	else {
        printf("%c is not a vowel.\n",ch);
    }
}
