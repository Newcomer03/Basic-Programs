#include<stdio.h>

int main()
{
	
	int i=5;
	rev(i);
	//i = 1,2,3;
	//m = ++i && ++j || ++k;
	//float a = 0.7;
	
	/*do
	{
		printf("%d\n",i);
		i++;
		if(i<15)
		break;
	}
	while(1);
	{
		//i++;
		//j++;
		printf("Silicon");
	}*/
	//printf("%d",i);
}
int rev(int n)
{
	if(n==0)
	return 0;
	
	else
	printf("%d,",n);
	
	rev(n--);
}
