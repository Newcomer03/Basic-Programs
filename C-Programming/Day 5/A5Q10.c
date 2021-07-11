#include<stdio.h>

main()
{//this code works for same as well as different number of rows and columns
	int arr1[50][50],arr2[50][50],row,col,i,j;
	
	printf("Enter the rows and columns of the array 'Not more than 50 each'\n");
	scanf("%d%d",&row,&col);
	printf("\nEnter the Values for first array\n\n");
	
	for(i=0;i<row;i++)
	{
		printf("Enter the Values for row %d\n",i+1);
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}

	
	for(i=0;i<col;i++)
	{//this block makes the transpose
		
		for(j=0;j<row;j++)
		{
			arr2[i][j] = arr1[j][i];
		}
	}
	
	printf("\nThe non-Transposed array is:\n");
	
	for(i=0;i<row;i++)
	{//this block prints the transpose
		for(j=0;j<col;j++)
		{
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	
	printf("\nThe Transposed array is:\n");
	
	for(i=0;i<col;i++)
	{//this block prints the transpose
		for(j=0;j<row;j++)
		{
			printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}
}
