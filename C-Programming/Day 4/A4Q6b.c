#include<stdio.h>

void factorial(int ,int *);

main()
{
	int num,fact;
	
	printf("Enter the number\n");
	scanf("%d",&num);
	
	factorial(num,&fact);
	printf("The factorial of %d is %d",num,fact);
}
void factorial(int num,int *fact)
{
	int x;
	*fact = 1;
		
	for(x=num;x>=1;x--)
	{
		*fact = *fact * x;
	}
	
}
