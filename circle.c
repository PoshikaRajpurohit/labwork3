#include <stdio.h>
main()
{
	float pie=3.14,r,area;
	printf("Enter the value of r");
	scanf("%f",&r);
	area=pie*r*r;
	printf("Area of circle=%.2f\n",area);
}