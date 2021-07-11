#include<stdio.h>

main()
{
	int arr[50],count=0,size,i,element;
	
	printf("Enter the size of array 'Not more than 50'\n");
	scanf("%d",&size);
	
	printf("Enter the Values\n");
	
	for(i=0;i<size;i++)	
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the element you want to search for\n");
	scanf("%d",&element);
	
	for(i=0;i<size;i++)	
	{
		if(element==arr[i])
		{
			count++;
		}
	}
	
	if(count!=0)
	{
		printf("The element'%d' is present in the array\n",element);
	}
	else
	{
		printf("The element'%d' is not present in the array\n",element);
	}

}
