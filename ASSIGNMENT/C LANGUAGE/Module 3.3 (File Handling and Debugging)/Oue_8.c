// WAP to reverse a string and check that the string is palindrome or not.

#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int ln=0,i;
	printf("Enter a String : ");
	gets(str);
	
	ln = strlen(str)-1;
	
	printf("\nReverse String is : "); // reverse string without using function
	for(i=ln;i>=0;i--)
	{
		printf("%c",str[i]);
	}
	
	int a=0; // string is palindrome or not
	
	for(i=0;i<ln;i++)
	{
		if(str[i] != str[ln-i])
		{
			a=1;
			break;
		}
	}
	if(a==1)
	{
		printf("\n\nString is not Palindrome.");
	}
	else
	{
		printf("\n\nString is Palindrome.");
	}
	return 0;
}
