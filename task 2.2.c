#include<stdio.h>

main()

{
	float r,area;
	
	printf("Enter Redius of circle =");
	scanf("%f",&r);
	
	area = 3.14 * r * r;
	printf("Area of circle = %.2f",area);
}