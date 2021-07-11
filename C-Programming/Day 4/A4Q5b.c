#include<stdio.h>
#include<math.h>

void comp_Interest(float,float,float,float,float *);

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
	
	comp_Interest(p,r,t,n,&a);
	
	printf("The Compund Interest is = %f",a);
}

void comp_Interest(float p,float r,float t,float n,float *a)
{
	float amt;
	r = r/100;
	amt = p * pow((1+(r/n)),(n*t));
	*a = amt;
}
