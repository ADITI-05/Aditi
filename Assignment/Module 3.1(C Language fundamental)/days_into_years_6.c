#include<stdio.h>
main()
{
	float years,days;
	printf("Enter years :");
	scanf("%f", &years);
	days=years*365;
	printf("Total days : %f \n ", days);
	
	printf(" Enter days : ");
	scanf("%f", &days);
	years=days/365;
	printf("Total years : %f", years);	
}
