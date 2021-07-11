#include<stdio.h>

void area_circle(int *, float *);

main()
{//this block is used to take the input and give final output
	int r;	//used to store the radius of the circle
	float area;	//used to store the area of the circle
	printf("Enter the radius of the circle\n");
	scanf("%d",&r);
	
	if(r<0)
	{
		printf("Radius cannot be Negative");
	}
	else
	{
	area_circle(&r,&area);	//function call
	printf("The area of the circle is = %.3f",area);
	}
}

void area_circle(int *r1, float *ar)
{//this block is used for claculating the area of the circle
	float ar1;
	ar1 = 3.14 * (*r1) * (*r1);
	*ar = ar1;
}
