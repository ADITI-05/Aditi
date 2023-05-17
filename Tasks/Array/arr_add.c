// Array : WAP to take 10 elements from user and make addition of all of them.

#include<stdio.h>
int main()
{
	int a[10],add=0; // array declaration
	int i;
	
	// to take input in array from user
	for(i=0;i<10;i++)
	{
		printf("Enter element %d : ",i+1);
		scanf("%d",&a[i]);
		add+=a[i];
	}
 printf("Addition of all elements : %d",add);

 return 0;
 
}

