/* WAP to take 10 no. Input from user and find out .
 How many Even numbers are there
 How many odd numbers are there
 Sum of even numbers
 Sum of odd numbers
 */

#include<stdio.h>
main ()
{
int i,value,even=0,odd=0,totalofe=0,totalofo=0;
for(i=1;i<=10;i++)
{
printf ("Enter the value : " );
scanf("%d",&value);
if(value%2 == 0)
{
	even+=1;
	totalofe+=value;
}
else
{
	odd+=1;
	totalofo+=value;
}
}
printf("Total of even numbers %d \n",even);
printf("Total of odd numbers %d  \n", odd);
printf("This is sum of even numbers %d \n",totalofe);
printf("This is sum of odd numbers %d \n", totalofo);
}

