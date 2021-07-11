#include<stdio.h>
//the program might seem extremely drawn out but it is highly versatile
float power(float,float);

main()
{
	float a,b;		//used to store the values given by user
	float res;		//used to store the result
	printf("Enter the values of a and b\n");
	scanf("%f%f",&a,&b);
	
	if(b==0)
	{
		int b1 = b;		//used to store the float b in int format
		printf("%.2f raised to the power %d is 1",a,b1);
	}
	
	else
	{
		res = power(a,b);	//calling the function
		printf("%.2f raised to the power %.2f is = %f",a,b,res);
	}
}

float power(float n1, float n2)
{
	//this function is the main mechanism of the program
	int c;		//counter variable
	float r = 1.000000; //used to store and return the result
	if(n2<0)
	{//this block executes if given value of b is negative
		c = -1;
		n1 = 1/n1;
		while(c>=n2)
		{
			r = r*n1;
			c--;	
		}
	}
	else
	{//this block executes if given value of b is positive
		c = 1;
		while(c<=n2)
		{
			r = r*n1;
			c++;	
		}
	}	
		
	return(r);	//returns the result
}
