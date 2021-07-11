#include<stdio.h>

main()
{
	int arr1[50][50],arr2[50][50],arr3[50][50],row,col,i,j;
	
	printf("Enter the rows and columns of the array 'Not more than 50 each'\n");
	scanf("%d%d",&row,&col);
	printf("\nEnter the Values for first array\n\n");
	
	for(i=0;i<row;i++)		//here we make the 1st 2-d array
	{
		printf("Enter the Values for row %d\n",i+1);
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Enter the Values for second array\n\n");
	
	for(i=0;i<row;i++)		//here we make the 2nd 2-d array
	{
		printf("Enter the Values for row %d\n",i+1);
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	printf("The New 2-d Array is:\n");
	
	for(i=0;i<row;i++)		//here we make the new 2-d array by adding the above two 2-d arrays
	{
		for(j=0;j<col;j++)
		{
			arr3[i][j] = arr1[i][j] + arr2[i][j];
			printf("%d ",arr3[i][j]);
		}
		printf("\n");
	}
}
