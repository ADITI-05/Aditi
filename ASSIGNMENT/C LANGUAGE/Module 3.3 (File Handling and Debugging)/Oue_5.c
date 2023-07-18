// WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice.

#include<stdio.h>
int main()
{
	int num;
	printf("=======How to sort=======\n");
	printf("(1) Ascending Order\n");
	printf("(2) Descending Order\n");
	
	printf("\nEnter your choice : ");
	scanf("%d",&num);
	
	if(num==1)
	{
		int n,a[5];
		int i,j,temp;
		
		printf("\nEnter no. of terms for Ascending order :- ");
		scanf("%d",&n);
		
		for(i=0;i<n;i++)
			{
				printf("Enter %d element : ",i+1);
				scanf("%d",&a[i]);
			}
	
			for(i=0;i<n;i++) // to sort the array
				{
					for(j=i+1;j<n;j++)
						{
							if(a[i]>a[j]) // ascending order
								{
									temp=a[i]; // swap elements
									a[i]=a[j];
									a[j]=temp;
								}
						}
				}
		printf("\n=====Ascending Order=====\n");
		for(i=0;i<5;i++)
			{
				printf("Your %d Element is : %d\n",i+1,a[i]);
			}
	}
	
	else if(num==2)
	{
		int n,a[5];
		int i,j,temp;
		
		printf("\nEnter no. of terms for Descending order :- ");
		scanf("%d",&n);
		
		for(i=0;i<n;i++)
			{
				printf("Enter %d element : ",i+1);
				scanf("%d",&a[i]);
			}
	
			for(i=0;i<n;i++) // to sort the array
				{
					for(j=i+1;j<n;j++)
						{
							if(a[i]<a[j])//Descending order
								{
									temp=a[i]; // swap elements
									a[i]=a[j];
									a[j]=temp;
								}
						}
				}
		printf("\n=====Descending Order=====\n");
		for(i=0;i<5;i++)
			{
				printf("Your %d Element is : %d\n",i+1,a[i]);
			}
	}
	else
	{
		printf("Invalid input!!");
	}
	return 0;
} 
