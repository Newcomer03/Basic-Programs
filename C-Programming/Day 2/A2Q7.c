#include<stdio.h>
											
main()
{
	int n1,n2,res;
	char x;
	printf("Enter the operator and numbers\n");	//asking for the input
	scanf("%c%d%d",&x,&n1,&n2);

	switch(x)
	{
		case '+':
			res = n1+n2;
			printf("%d+%d=%d",n1,n2,res);
			break;
		case '-':
			res = n1-n2;
			printf("%d-%d=%d",n1,n2,res);
			break;
			
		case '*':
			res = n1*n2;
			printf("%d*%d=%d",n1,n2,res);
			break;
		
		case '/':
			res = n1/n2;
			printf("%d/%d=%d",n1,n2,res);
			break;
		
		case '%':
			res = n1%n2;
			printf("%d%c%d=%d",n1,x,n2,res);
			break;
			
		default:
			printf("Invalid Operator");
				
	}
	
}
