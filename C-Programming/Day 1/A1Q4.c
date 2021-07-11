#include<stdio.h>

main()
{
	int a,sum;
	printf("\nEnter the 3-digit Number\n");
	scanf("%d",&a);
	
	sum = a%10;
	a = a/10;
	sum = sum + a%10;
	a = a/10;
	sum = sum + a;
		
	printf("\nThe sum of each digit of the given number is = %d",sum);
}
