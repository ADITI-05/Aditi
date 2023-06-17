// WAP to show difference between Structure and Union.

#include<stdio.h>

union Car{
	int model_id;
	char name[20];
	float weight;
};

struct Student{
	int id;
	char name[20]="ABC";
	float height=6.2;
};
	
int main()
{
	Student s1;
	Car c1;
	
	printf("====DIFFERENCE BETWEEN UNION AND STRUCTURE====\n\n");
	
	printf("Size of structure : %d\n",sizeof(s1));
	printf("Size of union : %d",sizeof(c1));
	
	return 0;
}
