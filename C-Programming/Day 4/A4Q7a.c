#include<stdio.h>

int gcd(int,int);

main()
{
	int n1,n2,res;
	
	printf("Enter the numbers\n");
	scanf("%d%d",&n1,&n2);
	
	res = gcd(n1,n2);
	printf("The GCD of %d and %d is %d",n1,n2,res);
}

int gcd(int n1,int n2)
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
	
	return(n2);		
}
