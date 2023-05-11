// WAP to find area of circle, rectangle and triangle.

#include<stdio.h>
int main()
{
	// area of circle
	printf("(1) Area of circle");
	float pi=3.14,radius;
	printf("\nEnter radius of circle :");
	scanf("%f",&radius);
	printf("Area of circle is : %f",pi*radius*radius);
	
	// area of rectangle
	printf("\n\n(2) Area of rectangle");
	int length,breadth;
	printf("\nEnter length of rectangle :");
	scanf("%d",&length);
	printf("Enter the breadth of rectangle :");
	scanf("%d",&breadth);
	printf("Area of rectangle is : %d",length*breadth);
	
	// area of triangle
	printf("\n\n(3) Area of triangle");
	float base,height,area_of_triangle;
	printf("\nEnter base of triangle :");
	scanf("%f",&base);
	printf("Enter height of triangle :");
	scanf("%f",&height);
	area_of_triangle = base*height/2;
	printf("Area of triangle is : %f",area_of_triangle);
	
	return 0;
}
