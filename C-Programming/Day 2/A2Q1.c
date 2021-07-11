#include<stdio.h>
											
main()
{
	int a,b,c,d;
	float x;
	printf("\nEnter the Numbers\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	if((c-d)==0)
	printf("The denominator cannot be Zero");
	
	else
	{
		x = (a-b)/(c-d);
		printf("The Value is = %f",x);
	}
	

}
