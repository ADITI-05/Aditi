// WAP to print result .

#include<stdio.h>
int main()
{
	int m1,m2,m3;
	
	printf("Enter marks of exam 1 : ");
	scanf("%d",&m1);
	if(m1>=40)
	{
		printf("Enter marks of exam 2 : ");
		scanf("%d",&m2);
		if(m2>=40)
		{
			printf("Enter marks of exam 3 : ");
			scanf("%d",&m3);
			if(m3>=40)
			{
				printf("Congratulations : You have passed the exam");
			}
			else
			{
				printf("Fail!");
			}
		}
		else
		{
		printf("Fail!");	
	}
	}
	else
	{
		printf("Fail!");
	}
	return 0;
}

