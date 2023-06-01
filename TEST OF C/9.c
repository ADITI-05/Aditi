// WAP to check that the string is palindrome or not.

#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i,l=0,a=0;
	
	printf("Enter String : ");
	gets(str);
	
	l=strlen(str)-1;
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=str[l-i])
		{
			a=1;
			break;
		}
	}
	if(a==0)
	{
		printf("String is palindrome");
	}
	else
	{
		printf("String is not palindrome");
	}
	return 0;
}


