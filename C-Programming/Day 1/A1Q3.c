#include<stdio.h>

main()
{
	int a,b,cube;
	printf("\nEnter the Numbers\n");
	scanf("%d%d",&a,&b);
	
	cube = (a>b)?a:b;
	cube = cube * cube * cube;
	
	printf("\nThe cube of the Larger number is = %d",cube);
}
