#include<stdio.h>

main()
{
	float bs;			//bs stands for basic salary
	float gs;			//gs stands for gross salary
	float da,hra,con,med;
		
	printf("\nPlease enter the Basic Salary of the Employee\n");
	scanf("%f",&bs);
	
	da = bs*(0.60);		//da is 60% of the basic salary
	hra = bs*(0.15);	//hra is 15% of the basic salary
	con = bs*(0.15);	//con stands for conveyance. It also is 15% of the basic salary
	med = bs*(0.10);	//med stands for medical. It is 10% of the basic salary
	
	gs = bs + da + hra + con + med;
	
	printf("\nThe Gross Salary of the employee is %f",gs);
}
