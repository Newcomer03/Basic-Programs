#include<stdio.h>

main()
{
	int arr[50],sum=0,size,i;
	
	printf("Enter the size of array 'Not more than 50'\n");
	scanf("%d",&size);
	printf("Enter the Values\n");
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		sum = sum + arr[i];
	}
	printf("The Sum of the numbers in the array is = %d",sum);
}
