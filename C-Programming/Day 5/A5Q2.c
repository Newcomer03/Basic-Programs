#include<stdio.h>

main()
{
	int arr1[50],arr2[50],size,i;
	
	printf("Enter the size of array 'Not more than 50'\n");
	scanf("%d",&size);
	printf("Enter the Values\n");
	
	for(i=0;i<size;i++)		//initializing the first array
	{
		scanf("%d",&arr1[i]);
	}
	
	
	for(i=size;i>0;i--)		//initializing second array
	{//used to reverse the first array
		arr2[i-1] = arr1[size-i];
	}
}
