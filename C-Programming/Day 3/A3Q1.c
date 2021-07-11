#include<stdio.h>

main()
{
	int x, sum, temp;
	sum = 0;
	
	printf("Enter the Number\n");
	scanf("%d",&x);
	
	temp = x;		//temporarily stores the given number
	
	while(temp!=0)
	{
		sum = sum + (temp%10);
		temp = temp/10;
	}
	
	printf("The sum of digits of %d is %d",x,sum);
}
