// Write program to make an addition of two number using pointer.

#include<stdio.h>

//function defination and declaration
int sum(int *a,int *b)
{
	return (*a)+(*b);
}
int main()
{
	int a,b,total;
	
	printf("Enter first number : ");
	scanf("%d",&a);
	
	printf("Enter second number : ");
	scanf("%d",&b);

	total = sum(&a,&b); // function calling (call by reference)
	
	printf("Addition is : %d",total);
	
	return 0;
}
