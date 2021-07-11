#include<stdio.h>

main()
{
	int n, x, count=0;
		
	printf("Enter the Number\n");
	scanf("%d",&n);
	x=1;
	
	while(x<=n)
	{
		if((n%x)==0)
		{
			count++;
		}
		x++;
	}
	
	if(count==2)
	{
		printf("It is a Prime number");
	}
	
	else
	{
		printf("It is not a Prime number");
	}
	

}
