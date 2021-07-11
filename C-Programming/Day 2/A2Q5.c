#include<stdio.h>
main()
{
	int a,b,c;
	printf("\nEnter the 3 numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	
	if((a>b)&&(a>c))
	{
		if(b>c)
		printf("\n%d %d %d",a,b,c);
		
		else
		printf("\n%d %d %d",a,c,b);
	}
	
	else if((b>a)&&(b>c))
	{
		if(c>a)
		printf("\n%d %d %d",b,c,a);
		
		else
		printf("\n%d %d %d",b,a,c);
	}
	
	else if((c>b)&&(c>a))
	{
		if(b>a)
		printf("\n%d %d %d",c,b,a);
		
		else
		printf("\n%d %d %d",c,a,b);
	}
	
	else
	printf("2 or more numbers are equal");
}
