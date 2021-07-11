#include<stdio.h>
main()
{
	int a,b,c;
	printf("\nEnter the 3 sides of the triangle\n");
	scanf("%d%d%d",&a,&b,&c);
	
	if(((a+b)>=c) || ((b+c)>= a) || ((c+a)>=b))
	{
		if((a==b)&&(b==c))
		printf("It is an Equilateral Triangle");
		
		else if((a==b)||(a==c)||(b==c))
		printf("It is an Isoceles Triangle");
		
		else if((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a))
		printf("It is a Right Angled Triangle");
		
		else
		printf("It is a Scalene Triangle");
	}
	
	else
	printf("The Triangle is not valid");
	
}
