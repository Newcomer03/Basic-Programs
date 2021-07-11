#include<stdio.h>
											
main()
{
	int x;
	
	printf("Enter the Pressure Reading\n");
	scanf("%d",&x);
	
	if((x==2)||(x==3))
	printf("The temperature is 500 degrees");
	
	else if((x==4))
	printf("The temperature is 600 degrees");
	
	else if((x==5)||(x==6)||(x==7))
	printf("The temperature is 700 degrees");	
	
	else
	printf("The temperature is 300 degrees");	
	
}
