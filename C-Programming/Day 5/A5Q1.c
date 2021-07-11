#include<stdio.h>

main()
{
	int arr[50],size,i,large,small;
	
	printf("Enter the size of array 'Not more than 50'\n");
	scanf("%d",&size);
	printf("Enter the Values\n");
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	large = arr[0];
	small = arr[0];
	for(i=1;i<size;i++)
	{
			if(large<arr[i])
			{
				large = arr[i];
			}
			
			if(small>arr[i])
			{
				small = arr[i];
			}	
	}
	
	printf("The largest among the given numbers is : %d\n",large);
	printf("The smallest among the given numbers is : %d",small);
}
