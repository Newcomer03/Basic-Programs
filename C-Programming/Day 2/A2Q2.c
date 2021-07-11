#include<stdio.h>
											
main()
{
	double x;
	int a,b;
	
	printf("Enter the fractional value\n");
	scanf("%lf",&x);
	
	a = x;
	b = a+1;
	
	printf("The Floor and Ceiling values of %lf are %d and %d",x,a,b);
	
}
