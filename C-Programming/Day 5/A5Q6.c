#include<stdio.h>

main()
{
	int arr[50],count=0,size,i;
	
	printf("Enter the size of array 'Not more than 50'\n");
	scanf("%d",&size);
	printf("Enter the Values\n");
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
		{
			count++;
		}
	}
	printf("There are %d even numbers in the array",count);
}
