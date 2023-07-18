// WAP Find out length of string without using inbuilt function.

#include<stdio.h>
int main()
{
	char str[20];
	int i,l=0;
	
	printf("Enter String : ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		l++;
	}
	
	printf("Length of your string is : %d",l);
	
	return 0;
}
