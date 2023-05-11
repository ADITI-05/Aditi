// WAP to convert years into days and days into years.

#include<stdio.h>
int main()
{
	float year,days;
	printf("Enter year :");
	scanf("%f", &year);
	days=year*365;
	printf("Total days : %f \n ", days);
	
	printf(" Enter days : ");
	scanf("%f", &days);
	year=days/365;
	printf("Total year : %f", years);	
	
	return 0;
}
