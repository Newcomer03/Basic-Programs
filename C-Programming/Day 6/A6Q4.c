#include<stdio.h>

int Xstrlen(char *);

main()
{
	int i,l;
	char str1[20],str2[20];
	printf("Enter a word\n");
	scanf("%s",str1);
	l = Xstrlen(str1);
		
	for(i=1;str1[i-1]!='\0';i++)
	{
		str2[i-1] = str1[l-i];
	}
	str2[i] = '\0';		//for storing the last character as null
	printf("The reversed word is : %s\n",str2);
	
}

int Xstrlen(char *ptr)
{
	int len = 0;
	while(*ptr!='\0')
	{
		len++;
		ptr++;
	}
	return len;
}
