// calculator.

void add();
void sub();
void mul();
void div();

int main()
{
	printf("\n This is main function\n");
 
	add();
	sub();
	mul();
	div();
 
 return 0;
}
void add()
{
	int n1,n2;
	printf("Enter 1 number :");
	scanf("%d", &n1);
	printf("Enter 2 number :");
	scanf("%d", &n2);
	printf("\n sum = %d",n1+n2);
}

void sub()
{
	int n3,n4;
	printf("\nEnter 1 number :");
	scanf("%d", &n3);
	printf("Enter 2 number :");
	scanf("%d", &n4);
	printf("\n sub = %d",n3-n4);
}

void mul()
{
	int n5,n6;
	printf("\nEnter 1 number :");
	scanf("%d", &n5);
	printf("Enter 2 number :");
	scanf("%d", &n6);
	printf("\n mul = %d",n5*n6);
}

void div()
{
	float n7,n8;
	printf("\nEnter 1 number :");
	scanf("%f", &n7);
	printf("Enter 2 number :");
	scanf("%f", &n8);
	printf("\n div = %f",n7/n8);
}

