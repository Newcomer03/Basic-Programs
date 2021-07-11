#include<stdio.h>

int Xstrlen(char *);

main()
{
	int i,l1,l2,count=0;
	char str1[20],str2[20];
	
	printf("Enter a string\n");
	gets(str1);
	printf("Enter another string\n");
	gets(str2);
	
	l1 = Xstrlen(str1);
	l2 = Xstrlen(str2);
	
	
	if(l1==l2)
	{
		for(i=0;str1[i]!='\0';i++)
		{
			if(str2[i] != str1[i])
			{
				count++;
			}
		}
		
		if(count==0)
		{
			printf("The given strings are exactly Same");
		}
		else
		{
			printf("The given strings are not Same");
		}
	}
	
	else
	{
		printf("The given strings are not exactly Same");
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
