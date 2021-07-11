#include<stdio.h>

void check(char);

main()
{
	char c;
	printf("Enter the Letter\n");
	scanf("%c",&c);
	
	check(c);
}

void check(char ch)
{
	int a = ch;
	if(((a>=65)&&(a<=90) || (a>=97)&&(a<=122)))
	{
		if((ch=='a') ||  (ch=='e') ||  (ch=='i') ||  (ch=='o') ||  (ch=='u') ||  (ch=='A') ||  (ch=='E') ||  (ch=='I') ||  (ch=='O') ||  (ch=='U'))
		{
			printf("'%c' is a Vowel",ch);
		}
		else
		{
			printf("'%c' is a Consonant",ch);
		}
	}
	else
	{
		printf("'%c' is not a letter",ch);
	}
}
