#include<stdio.h>

main()
{
	int num,x,fact=1;
	
	printf("Enter the number\n");
	scanf("%d",&num);
	
	for(x=num;x>=1;x--)
	{
		fact = fact * x;
	}
	
	printf("The factorial of %d is %d",num,fact);
}
