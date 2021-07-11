#include<stdio.h>

main()
{
	int num,temp,rem=0,x;
	
	printf("Enter the Number\n");
	scanf("%d",&num);
	temp = num;
	
	for(x=0;temp>0;temp/=2)
	{
		if((temp%2)==0)
		{
			rem = rem + 0;
		}
		else
		{
			rem = rem + 1;
		}
		
		rem = rem * 10;
	}
	rem = rem/10;
	printf("The Binary Code for %d is %d",num,rem);
}
