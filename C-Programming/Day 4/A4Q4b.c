#include<stdio.h>

void checkPrime(int *, int *);

main()
{
	int n,c;
	
	printf("Enter the Number\n");
	scanf("%d",&n);
	
	checkPrime(&n,&c);
	if(c==2)
	{
		printf("It is a Prime number");
	}
	
	else
	{
		printf("It is not a Prime number");
	}
	
}

void checkPrime(int *no,int *cnt)
{
	int x, count=0;
	x=1;
	
	while(x<=*no)
	{
		if((*no%x)==0)
		{
			count++;
		}
		x++;
	}
	*cnt = count;
}
