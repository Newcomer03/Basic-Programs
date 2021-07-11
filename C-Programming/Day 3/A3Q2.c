#include<stdio.h>

main()
{
	int x, rev, temp;
	rev = 0;
	
	printf("Enter the Number\n");
	scanf("%d",&x);
	
	temp = x;		//temporarily stores the given number
	
	while(temp!=0)
	{
		rev = rev + (temp%10);
		rev = rev*10;
		temp = temp/10;
	}
	
	rev = rev/10;
	
	printf("The sum of digits of %d is %d",x,rev);
}
