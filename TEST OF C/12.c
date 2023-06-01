// Define What is Recursive Function and WAP to find Factorial of number with using Recursive function.

/* Recursive function :  "Any function that happens to call itself again and again (directly or indirectly), 
                        unless the program satisfies some specific condition/subtask is called a recursive function."  */

#include<stdio.h>

//function decalaration and defination
double fact(int a)
{
	if(a==0)
	{
		return 1;
	}
	return a*fact(a-1);
}

int main()
{
	int n;
	
	printf("Enter number to find factorial : ");
	scanf("%d",&n);

	printf("The factorial of %d number is : %lf",n,fact(n));//function calling
	return 0;
}
