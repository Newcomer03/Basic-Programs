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
	if(rev==x)
	{
		printf("It is a Palindrome number");
	}
	
	else
	{
		printf("It is not a Palindrome number");
	}
}
