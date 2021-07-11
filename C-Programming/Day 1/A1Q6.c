#include <stdio.h>
#include <math.h>
int main()
{
  int a, b, c, d;
  double root1, root2;

	//taking input
	
  printf("Enter a, b and c where a*x*x + b*x + c = 0\n");
  scanf("%d%d%d", &a, &b, &c);

  d = b*b - 4*a*c;

  root1 = (-b + sqrt(d))/(2*a);
  root2 = (-b - sqrt(d))/(2*a);

  printf("First root = %.2lf\n", root1);
  printf("Second root = %.2lf\n", root2);
  
  }
