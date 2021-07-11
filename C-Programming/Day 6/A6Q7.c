#include<stdio.h>

int Xstrlen(char *);

main()
{
	int i,j,l;
	char str[20],temp;
	printf("Enter a string\n");
	gets(str);
	
	l = Xstrlen(str);
		
	for(i=0;i<l-1;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(str[i]>str[j])
			{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
	
	printf("The alphabetically arranged String is : %s",str);
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
