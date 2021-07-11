#include<stdio.h>

void gcd(int ,int ,int *);

main()
{
	int n1,n2,res;
	
	printf("Enter the numbers\n");
	scanf("%d%d",&n1,&n2);
	
	gcd(n1,n2,&res);
	printf("The GCD of %d and %d is %d",n1,n2,res);
}

void gcd(int n1,int n2,int *res)
{//here we use a new way of finding GCD or HCF
	
	while(n1!=n2)
	{
		if(n1>n2)
		{
			n1 = n1-n2;
		}
		else
		{
			n2 = n2-n1;
		}
		
	}
	*res = n2;	
}
