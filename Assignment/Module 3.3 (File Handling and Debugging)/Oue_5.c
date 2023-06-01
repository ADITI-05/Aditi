// WAP to take two Array input from user and sort them in ascending or descending order as per user�s choice.

#include<stdio.h>

int main()
{
	int num;
	
	printf("=======MENU=======\n");
	printf("(1) Ascending\n");
	printf("(2) Descending\n");
	
	printf("\nEnter your choice : ");
	scanf("%d",&num);
	
	if(num==1)
	{
		int n,a[5];
		int i,j,temp;
		
		printf("\nEnter no. of terms for Ascending order : ");
		scanf("%d",&n);
		
		for(i=0;i<n;i++)
			{
				printf("Enter %d element : ",i+1);
				scanf("%d",&a[i]);
			}
	
			//to sort the array
			for(i=0;i<n;i++)
				{
					for(j=i+1;j<n;j++)
						{
							if(a[i]>a[j])//ascending order
								{
									//swap elements
									temp=a[i];
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
		
		printf("\nEnter no. of terms to print Descending order : ");
		scanf("%d",&n);
		
		for(i=0;i<n;i++)
			{
				printf("Enter %d element : ",i+1);
				scanf("%d",&a[i]);
			}
	
			//to sort the array
			for(i=0;i<n;i++)
				{
					for(j=i+1;j<n;j++)
						{
							if(a[i]<a[j])//Descending order
								{
									//swap elements
									temp=a[i];
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
