#include<stdio.h>
main()
{
	float b,h,triangle;
	printf("Enter the value of b");
	scanf("%f",&b);
	printf("Enter the value of h");
	scanf("%f",&h);
	triangle=0.5*b*h;
	printf("Area of triangle=%.3f",triangle);
}