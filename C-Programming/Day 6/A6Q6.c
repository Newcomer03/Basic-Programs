#include<stdio.h>

main()
{
	int i;
	char str1[20],str2[20],x;
	printf("Enter a word\n");
	gets(str1);
	//we only have to store a string in another string
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i] = str1[i];
	}
	/*there will be no printing on the output screen
	it will only take a string as input*/
}
