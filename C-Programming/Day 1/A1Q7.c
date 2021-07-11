#include<stdio.h>

main()
{
	int a,b,c;				//stores the three given numbers
	int smallest;			//stores the smallest numbers
	
	printf("\nEnter the Numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	
	smallest = (a<b)?(a<c)?a:c:(b<c)?b:c;		//conditional operator
	
	printf("\nThe smallest number among the three is = %d",smallest);
}
