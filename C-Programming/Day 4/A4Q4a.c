#include<stdio.h>

int checkPrime(int);

main()
{
	int n,count;
	
	printf("Enter the Number\n");
	scanf("%d",&n);
	
	count = checkPrime(n);
	if(count==2)
	{
		printf("It is a Prime number");
	}
	
	else
	{
		printf("It is not a Prime number");
	}
	
}

int checkPrime(int no)
{
	int x, count=0;
	x=1;
	
	while(x<=no)
	{
		if((no%x)==0)
		{
			count++;
		}
		x++;
	}
	return(count);
}
