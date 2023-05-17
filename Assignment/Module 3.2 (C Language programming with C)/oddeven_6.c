/* WAP to take 10 no. Input from user and find out .
 How many Even numbers are there
 How many odd numbers are there
 Sum of even numbers
 Sum of odd numbers
 */

#include<stdio.h>
int main ()
{
int i,num,o=0,e=0,sumofeven,sumofodd;
for(i=1;i<=10;i++)
{
printf ("\nEnter the value : " );
scanf("%d",&num);
if(num%2 == 0)
{
	printf("Your number is even.");
	e++;              //if number is even than e++ count
	sumofeven+=num;   //if number is even than number is stored
}
else
{
	printf("Your number is odd.");
	o++;             //if number is odd than o++ count
	sumofodd+=num;   //if number is odd than number is stored 
}
}
printf("Total of even numbers %d \n",e);
printf("Total of odd numbers %d  \n", o);
printf("This is sum of even numbers %d \n",sumofeven);
printf("This is sum of odd numbers %d \n",sumofodd);
return 0;
}

