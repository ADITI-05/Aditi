#include<stdio.h>
main()
{
	int num,quantity;
	float pri,amt,total;
	char ch;
	
	while(1)
	{
	printf("-------------Menu------------------\n");
	printf("1.Pizza       \tPrice = 180rs/pcs \n");
	printf("2.Burger      \tPrice = 100rs/pcs \n");
	printf("3.Dosa        \tPrice = 120rs/pcs \n");
	printf("4.Idli        \tPrice = 50rs/pcs  \n");
	
	printf("Please Enter your choice... :");
	scanf("%d", &num);
	printf("Enter the quantity :");
	scanf("%d", &quantity);
	
	switch(num)
	{
		case 1:
			pri=180;
			break;
		case 2:
			pri=100;
			break;
		case 3:
			pri=120;
			break;
		case 4:
			pri=50;
			break;
		default:
			printf("\nSorry Unavailable choose...\n");
			break;
		}
		
		amt=pri*quantity;
		printf("Amount = %.2f\n", amt);
		
		total=total+amt;
		printf("total amount is = %.2f\n", total);
		
		printf("Do you want to place more orders ? y & n :");
		scanf("%s", &ch);
		if(ch == 'n')
		{
			return 0;
		}				
	}
}
	
	
	
	

	
	
