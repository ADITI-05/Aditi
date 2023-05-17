// Recursion : WAP to print 1 to 10 without using loop and using recursion.
                
/* #include<stdio.h>
void print(int);

int main()
{
	int N=10;
	printf("\nNumbers from 1 to 10 are : ");
	print(N);
	return 0;
}
 void print(int N)
 {
 	if(N)
 	print(N-1);
 	else
 	return;
 	printf("\n%d",N);
 }     */
 
#include<stdio.h>
int num(int n)
{
	if(n<=10)
	{
      printf("%d\n",n);
	}
	return num(n+1);
}
int main()
{
	int n=1;
	num(n);
}



