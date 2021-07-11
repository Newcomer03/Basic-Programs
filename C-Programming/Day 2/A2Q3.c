#include <stdio.h>
#include <math.h>
int main()
{
  double a, b, c, d;
  double root1, root2;

	//taking input
	
  printf("Enter a, b and c where a*x*x + b*x + c = 0\n");
  scanf("%lf%lf%lf", &a, &b, &c);
  
  d = b*b - 4*a*c;
  
	if((a==0)&&(b==0))
	{
		printf("No Solution");
	}
	
	else if(a==0)
	{
		root1 = (-c)/b;
		printf("The only root is = %lf",root1);
	}
	
	else if(d==0)
	{
		printf("There are no real roots");
	}
	
	else
	{
		root1 = (-b + sqrt(d))/(2*a);
  		root2 = (-b - sqrt(d))/(2*a);

  		printf("First root = %.2lf\n", root1);
  		printf("Second root = %.2lf\n", root2);
  	}
  
  }
