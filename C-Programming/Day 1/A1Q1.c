#include<stdio.h>
#include<math.h>												//we include the <math.h> package to use the sqrt() function
main()
{
	int s1,s2,area;
	double radius;
	printf("\nEnter the length of 2 sides of the rectangle\n");
	scanf("%d%d",&s1,&s2);
	
	area= s1 * s2;
	printf("\nThe Area of the Rectangle is = %d",area);			//optional
	
	radius = area/(3.14);
	radius = sqrt(radius);
	printf("\nThe Radius of the Circle whose area is same as the Rectangle is = %lf",radius);
}
