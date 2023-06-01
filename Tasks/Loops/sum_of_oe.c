// 10 input from user .. count of odd even and sum of odd even

#include<stdio.h>
int main ()
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
return 0;
}

