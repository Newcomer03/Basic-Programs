#include<stdio.h>

main()
{
	int arr1[50],arr2[50],temp,size,i,j;
	
	printf("Enter the size of array 'Not more than 50'\n");
	scanf("%d",&size);
	printf("Enter the Values\n");
	
	for(i=0;i<size;i++)		//initializing the first array
	{
		scanf("%d",&arr1[i]);
	}
	
	
	for(i=0;i<size;i++)	
	{//here we arrange all the elements in descending order and store in arr2[]
		arr2[i] = arr1[i];
		for(j=i;j<size;j++)
		{
			if(arr2[i]<arr1[j])
			{
				temp = arr2[i];
				arr2[i] = arr1[j];
				arr1[j] = temp;
			}
		}
	}
	printf("Descending Order\n");
	
	for(i=0;i<size;i++)		
	{
		printf("%d ",arr2[i]);
	}
}
