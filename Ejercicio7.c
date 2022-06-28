#include <stdio.h>

int main()
{
	int year;
	
	printf("Input a year: ");
	scanf("%d", &year);
	
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
		printf("The year which you have introduced is a leap-year");
	}
		
	return 0;
}

