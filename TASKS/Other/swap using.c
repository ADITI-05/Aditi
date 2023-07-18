// swap two number using third variable

#include<stdio.h>
int main()
{
	double first,second,third;
	
	printf("Enter first value : ");
	scanf("lf",&first);
	printf("Enter Second value : ");
	scanf("lf",&second);
	
	third=first;
	first=second;
	second=third;
	
	printf("\n Before swapping, first number = %.21f \n", first);
	printf("After swapping, second number = %.2lf ", second);
	return 0;
}

