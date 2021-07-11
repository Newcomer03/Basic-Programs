#include<stdio.h>

int Xstrlen(char *);

main()
{
	int i,l,count=0;
	char str1[20],str2[20];
	printf("Enter a word\n");
	scanf("%s",str1);
	l = Xstrlen(str1);
		
	for(i=1;str1[i-1]!='\0';i++)
	{
		str2[i-1] = str1[l-i];
	}
		
	for(i=0;str1[i]!='\0';i++)
	{
		if(str2[i] != str1[i])
		{
			count++;
		}
	}
	if(count==0)
	{
		printf("The given string is a Palindrome");
	}
	else
	{
		printf("The given string is not a Palindrome");
	}
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
