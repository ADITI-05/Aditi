// WAP to find simple interest.

#include<stdio.h>
int main()
{
	float PAmount , ROI , Time_period , SI;
	
	printf("\n Please Enter the principle amount : ");
	scanf("%f", &PAmount);
	
	printf("\n Please Enter Rate of interest : ");
	scanf("%f", &ROI);
	
	printf("\n Please Enter the Time period : ");
	scanf("%f", &Time_period);
	
	SI = (PAmount * ROI * Time_period) / 100;
	
	printf("\n Simple Interest is = %.2f",SI);
	
	return 0;
}
