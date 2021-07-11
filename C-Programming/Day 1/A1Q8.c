#include<stdio.h>

main()
{
	double f;
	double c;
	printf("\nEnter the Temperature in Fahrenheit\n");
	scanf("%lf",&f);
	
	c = (f-32)*(5.0/9.0);		//conversion from fahrenheit to celsius
	
	printf("\nThe Temperature in Celsius is = %lf",c);
}
