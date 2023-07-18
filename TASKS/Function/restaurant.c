// Tops Restaurant. (type 4)

#include<stdio.h>
int piz(int q) // func 1 : declaration and defination
{
	int pri,amt;
	printf("\nYour item is : pizza");
	printf("\nEnter quantity : ");
	scanf("%d",&q);
	pri = 90 * q;
	return pri;
}
int bur(int q)  // func 2 : declaration and defination
{
	int pri,amt;
	printf("\nYour item is : Burger");
	printf("\nEnter quantity : ");
	scanf("%d",&q);
	pri = 89 * q;
	return pri;
}
int paa(int q) // func 3 : declaration and defination
{
	int pri,amt;
	printf("\nYour item is : Paani-Puri");
	printf("\nEnter quantity : ");
	scanf("%d",&q);
	pri = 100 * q;
	return pri;
}
int dos(int q) // func 4 : declaration and defination
{
	int pri,amt;
	printf("\nYour item is : Paani-Puri");
	printf("\nEnter quantity : ");
	scanf("%d",&q);
	pri = 80 * q;
	return pri;
}

// main function
int main()
{
	int q,n,amt,total;
	char ch;
	
	do
	{
		printf("\n==============Welcome to Tops Restaurant==============\n\n");
		
		printf("Sr_no.     Item        Price\n");
		printf("  1.       Pizza       90/-\n");
		printf("  2.       Burger      89/-\n");
		printf("  3.       Paani-puri  100/-\n");
		printf("  4.       Dosa        80/-\n");
		
		printf("\n\nEnter your choice : ");
		scanf("%d",&n);
		
		if(n==1)
		{
		 amt = piz(q); // calling func 1
		 printf("\nTotal Price = %d",amt);
		 total = total + amt;
		}	
		else if(n==2)
		{
		 amt = bur(q); // calling func 2
		 printf("\nTotal Price = %d",amt);
		 total = total + amt;	
		}
		else if(n==3)
		{
		 amt = paa(q); // calling func 3
		 printf("\nTotal Price = %d",amt);
		 total = total + amt;	
		}	
		else if(n==4)
		{
		 amt = dos(q); // calling func 4
		 printf("\nTotal Price = %d",amt);
		 total = total + amt;	
		}
		else
		{
		 printf("\nYour choice is incorrect");
		}
		printf("\nDo you want anything else ? y & n : ");
		scanf("%s",&ch);
	}
	while(ch=='y' || ch=='Y');
	if(ch=='n' || ch=='N')
	{
		printf("\n\nThank you very much");
		printf("\nYour total bill is : %d",total);
	}
	else
	{
		printf("\nYour Input are not y & n!!!");
	}
	return 0;
}
