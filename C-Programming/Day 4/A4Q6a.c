#include<stdio.h>

int factorial(int);

main()
{
	int num,fact;
	
	printf("Enter the number\n");
	scanf("%d",&num);
	
	fact = factorial(num);
	printf("The factorial of %d is %d",num,fact);
}

int factorial(int num)
{
	int x,fact=1;
		
	for(x=num;x>=1;x--)
	{
		fact = fact * x;
	}
	
	return(fact);
}
