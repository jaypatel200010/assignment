//30.WAP to convert years into days and days into years
#include <stdio.h>

int main()
{
    int years, days;
    const int days_per_year = 365;
    // Accept the number of years from the user
    printf("Enter the number of years: ");
    scanf("%d", &years);
    // Converting years to days
    days = years * days_per_year;
    printf("%d years is equal to %d days.\n", years, days);
    // Accept the number of days from the user
    printf("Enter the number of days: ");
    scanf("%d", &days);
    // Converting days to years
    years = days / days_per_year;
    printf("%d days is equal to %d years.\n", days, years);

   
}
