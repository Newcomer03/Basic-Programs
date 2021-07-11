#include<stdio.h>
											
main()
{
	char x;
	
	printf("Enter the Character\n");
	scanf("%c",&x);
	
	if((x=='a')|| (x=='e')|| (x=='i')|| (x=='o')|| (x=='u')|| (x=='A')|| (x=='E')|| (x=='I')|| (x=='O')|| (x=='U'))
	printf("The Character '%c' is a Vowel",x);
	
	else
	printf("The Character '%c' is a Constant",x);
	
}
