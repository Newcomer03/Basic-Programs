#include<stdio.h>
#include<math.h>

void binary(int,int *);

main()
{//this block only takes the input
	int no,bin;
	printf("Enter the Number\n");
	scanf("%d",&no);
	binary(no,&bin);	//calling the function
	printf("The Binary Code for %d is %d",no,bin);
}

void binary(int no,int *bin)
{//this block converts decimal to binary
	int d;
	int sum = 0;
	int cnt = 0;
	
	while(no>0)
	{
		d = no%2;
		sum = sum+d*pow(10,cnt);
		no = no/2;
		cnt++;
	}
	*bin = sum;		//stores the binary number
}
