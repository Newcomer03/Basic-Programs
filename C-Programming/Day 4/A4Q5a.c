#include<stdio.h>
#include<math.h>

float comp_Interest(float,float,float,float);

main()
{
	float a,p,r,t,n;
	printf("Enter the Principal Amount\n");
	scanf("%f",&p);
	printf("Enter the Period in Years\n");
	scanf("%f",&t);
	printf("Enter the number of times the interest is compounded per period\n");
	scanf("%f",&n);
	printf("Enter the Rate of Interest\n");
	scanf("%f",&r);
	
	a = comp_Interest(p,r,t,n);
	
	printf("The Compund Interest is = %f",a);
}

float comp_Interest(float p,float r,float t,float n)
{
	float amt;
	r = r/100;
	amt = p * pow((1+(r/n)),(n*t));
	return(amt);
}
