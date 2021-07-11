#include<stdio.h>

main()
{
	int i,vcount=0,ccount=0;
	char str[20],x;
	printf("Enter a word\n");
	scanf("%s",str);
		
	for(i=0;str[i]!='\0';i++)
	{
		x = str[i];
		if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
		{
			vcount++;
		}
		else
		{
			ccount++;
		}
	}
	
	printf("The number of vowels present are: %d",vcount);
	printf("\nThe number of consonants present are: %d",ccount);
}
