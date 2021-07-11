#include<stdio.h>

main()
{
	int f1 = 0;
	int f2 = 1;
	int f3,res;
	int n,x;
	
	printf("Enter the nth term of the fibonacci\n");
	scanf("%d",&n);
	x=2;
	if(n>=0)
	printf("%d,",f1);
	
	if(n>=1)
	printf("%d,",f2);
	
	//doing all the main work here
	while(x<n)
	{
		f3 = f2;
		res = f2 + f1;
		f2 = res;
		f1 = f3;
		if(x<(n-1))
		{
			printf("%d,",res);
		}
		else
		{
			printf("%d....",res);
		}
		
		x++;
	}
}
