#include<stdio.h>

main()
{
	int arr[50],size,i,temp;
	
	printf("Enter the size of array 'Not more than 50'\n");
	scanf("%d",&size);
	printf("Enter the Values\n");
	
	for(i=0;i<size;i++)		//initializing the array
	{
		scanf("%d",&arr[i]);
	}
	
	
	for(i=0;i<=size/2;i++)
	{//used to reverse the array
		temp = arr[i];
		arr[i] = arr[size-(i+1)];
		arr[size-(i+1)] = temp;
	}
	
	printf("Reversed Version\n");
	
	for(i=0;i<size;i++)		
	{
		printf("%d ",arr[i]);
	}
}
