#include<stdio.h>

main()
{
	float pa;			//bs stands for principal amount
	float time;			//time in days
	int roi;			//roi stands for rate of interest
	float si;			//si stands for simple interest
	float tap;			//tap stands for total amount payable
		
	printf("\nPlease enter the Principal Amount\n");
	scanf("%f",&pa);
	
	printf("\nPlease enter the Time in days\n");
	scanf("%f",&time);
	
	printf("\nPlease enter the Rate of Interest\n");
	scanf("%d",&roi);
	
	si = (pa * (time/365) * roi)/100;
	printf("\nThe Simple Interest is %f",si);
	
	tap = pa + si;
	printf("\nThe total amount payable is %f",tap);
}
