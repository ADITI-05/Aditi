//  Write a program to sort the array of 5 elements.

#include<stdio.h>
int main()
{
	int a[5],i,j;
	int temp=0;
	
	for(i=0;i<5;i++)
	{
		printf("\nEnter element %d : ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	printf("\n=====Ascending Order=====\n");
	
	for(i=0;i<5;i++)
	{
		printf("Your %d element is : %d\n",i+1,a[i]);
	}
	return 0;
}
