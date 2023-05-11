// Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo).

#include <stdio.h>   
int main()  
{  
  printf("(1) Addition");
  
  int num1,num2; // Addition of two no.
  printf("\nEnter number 1 :");
  scanf("%d",&num1);
  printf("Enter number 2 :");
  scanf("%d",&num2);
  printf("Total Addition is = %d",num1+num2);
  
  printf("\n\n(2) Substraction");
  
  int num3,num4; // Substraction of two no.
  printf("\nEnter number 1 :");
  scanf("%d",&num3);
  printf("Enter number 2 :");
  scanf("%d",&num4);
  printf("Total Substraction is = %d",num3-num4);
  
  printf("\n\n(3) Multiplication");
  
  float num5,num6; // Multiplicatio of two no.
  printf("\nEnter number 1 :");
  scanf("%f",&num5);
  printf("Enter number 2 :");
  scanf("%f",&num6);
  printf("Total Multiplication is = %f",num5*num6); 
  
  printf("\n\n(4) Division");
  
  float num7,num8; // Division of two no.
  printf("\nEnter number 1 :");
  scanf("%f",&num7);
  printf("Enter number 2 :");
  scanf("%f",&num8);
  printf("Total Division is = %f",num7/num8);
  
  printf("\n\n(5) Modulo");
  
  int num9,num10; // Modulo of two no.
  printf("\nEnter number 1 :");
  scanf("%d",&num9);
  printf("Enter number 2 :");
  scanf("%d",&num10);
  printf("Total Modulo is = %d",num9 % num10);
  
    return 0; 
}  
