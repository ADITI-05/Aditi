// WAP to find simple interest.

#include<stdio.h>
main()
{
	float PAmount , ROI , Time_period , SI;
	
	printf("\n Please Enter the principle amount : \n");
	scanf("%f", &PAmount);
	
	printf("\n Please Enter Rate of interest : \n");
	scanf("%f", &ROI);
	
	printf("\n Please Enter the Time period : \n");
	scanf("%f", &Time_period);
	
	SI = (PAmount * ROI * Time_period) / 100;
	
	printf("\n Simple Interest for Principle Amount %.2f is = %.2f", PAmount,SI);
}
