//29.Convert minutes into seconds and hours


#include<stdio.h>
int main()
{
	int seconds,minutes,hours;
	int sec_per_min=60,min_per_hr=60;
	printf("Enter the number of minutes: ");
    scanf("%d", &minutes);
    // Converting minutes to seconds and hours
    seconds = minutes * sec_per_min;
    hours = minutes / min_per_hr;
    printf("%d minutes is equal to %d seconds and %d hours.\n", minutes, seconds, hours);
}
