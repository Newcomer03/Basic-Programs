#include<stdio.h>
#include<stdlib.h>

main()
{
	int i=0;
	FILE *fp;
	char ch;
	fp = fopen("C:\\Users\\FAMILY\\Desktop\\Pandemic Break Course\\test.txt","r");
	
	if(fp==NULL)
	{
		printf("File does not Exist");
		exit(1);
	}
	
	else
	{
		while(1)
		{
			ch=fgetc(fp);
			if(ch==EOF)
			{
				break;
			}
			else
			{
				printf("%c",ch);
			}
		}
	}
	
	fclose(fp);
}
