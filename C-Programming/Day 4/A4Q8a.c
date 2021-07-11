#include<stdio.h>
#include<math.h>

int binary(int);

main()
{//this block only takes the input
	int no;
	printf("Enter the Number\n");
	scanf("%d",&no);
	binary(no);	//calling the functin
}

int binary(int no)
{//this block converts decimal to binary
	int d;
	int sum = 0;	//it stores the binary value
	int cnt = 0;
	
	while(no>0)
	{
		d = no%2;
		sum = sum+d*pow(10,cnt);
		no = no/2;
		cnt++;
	}
	printf("The Binary Code for %d is %d",no,sum);
}
