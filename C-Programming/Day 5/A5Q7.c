#include<stdio.h>

int checkPrime(int);

main()
{
	int arr[50],count=0,size,i;
	
	printf("Enter the size of array 'Not more than 50'\n");
	scanf("%d",&size);
	printf("Enter the Values\n");
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	
	printf("The Prime Numbers are :- ");
	
	for(i=0;i<size;i++)
	{
		count = checkPrime(arr[i]);
		if(count==2)
		{
			printf("%d ",arr[i]);
		}	
	}
}

int checkPrime(int no)
{
	int x, count=0;
	x=1;
	
	while(x<=no)
	{
		if((no%x)==0)
		{
			count++;
		}
		x++;
	}
	return(count);
}
