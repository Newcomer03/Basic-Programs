#include<stdio.h>

main()
{
	int i,j;
	char str1[20],str2[20],str3[40],x;
	printf("Enter a String\n");
	gets(str1);
	printf("Enter another String\n");
	gets(str2);
		//str3 is used for the concatination process
	for(i=0;str1[i]!='\0';i++)
	{
		str3[i] = str1[i];
	}
	
	for(j=0;str2[j]!='\0';j++)
	{
		str3[i] = str2[j];
		i++;
	}
	
	printf("The New String is : \n%s",str3);
}
