#include<stdio.h>

main()
{
	int x, sum, temp,c;
	sum = 0;
	
	printf("Enter the Number\n");
	scanf("%d",&x);
	
	temp = x;
	
	while(temp!=0)
	{
		c = temp%10;
		sum = sum + (c*c*c);		//sum + cube of the extracted digit
		temp /= 10;
	}
	
	if(sum==x)
	{
		printf("%d is an Armstrong Number",x);
	}
	
	else
	{
		printf("%d is not an Armstrong Number",x);	
	}
}
