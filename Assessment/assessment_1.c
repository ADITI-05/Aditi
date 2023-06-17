/* Assessment : 1 (C language)
Create a Food billing system

Make sure each business logic is denoted with appropriate comments and make your code interactive and represent clean and clear output on your console screen.

Adhere to the coding principles

Firstly, display the food items available
Then after the user can choose any of the item displayed Also take the quantity of selected food item by the customer, then ask the user that he/she wanna select
more? If yes then again display the food items available and take an order from the customer. Here, you have to consider the total bill as the price of food items
previously selected plus the price of new items added should display as a whole bill.
If no then display the final bill on the screen
*/

#include<stdio.h>
int main()
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
	
	printf("\nPlease Enter your choice... : ");
	scanf("%d", &num);
	
	if(num >= 0)
	{
		if(num == 1){
			printf("\nYou have selected Pizza.");
			printf("\n\nEnter the quantity : ");
			scanf("%d",&quantity);
			pri = 180;
			amt = pri * quantity;
			printf("\nAmount = %.2f",amt);
			total = total + amt;
			printf("\nTotal Amount is = %.2f\n",total); 
		}
		else if(num == 2){
		    printf("\nYou have selected Burger.");
			printf("\n\nEnter the quantity : ");
			scanf("%d",&quantity);
			pri = 100;
			amt = pri * quantity;
			printf("\nAmount = %.2f",amt);
			total = total + amt;
			printf("\nTotal Amount is = %.2f\n",total); 	
		}
		else if(num == 3){
			printf("\nYou have selected Dhosa.");
			printf("\n\nEnter the quantity : ");
			scanf("%d",&quantity);
			pri = 120;
			amt = pri * quantity;
			printf("\nAmount = %.2f",amt);
			total = total + amt;
			printf("\nTotal Amount is = %.2f\n",total); 
		}
		else if(num == 4){
			printf("\nYou have selected Idli.");
			printf("\n\nEnter the quantity : ");
			scanf("%d",&quantity);
			pri = 50;
			amt = pri * quantity;
			printf("\nAmount = %.2f",amt);
			total = total + amt;
			printf("\nTotal Amount is = %.2f\n",total); 
		}
		else{
			printf("\nINVALID INPUT!!!!!!");
		}
	}
		printf("\nDo you want to place more orders ? y & n : ");
		scanf("%s",&ch);
		if(ch=='n')
		{
			return 0;
		}		
	}
	return 0;
}
	
	
	
	

	
	
