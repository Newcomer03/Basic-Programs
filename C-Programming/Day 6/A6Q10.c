#include<stdio.h>

main()
{
	struct Student
	{
		char name[50];
		char group[10];
		char sec[10];
		char gender[20];
	} s[10];
	
	int i,j;
	for(i=0;i<10;i++)
	{
		printf("Enter Credentials For Student %d\n",i+1);
		
			printf("Name\n");
			gets(s[i].name);
			printf("Class\n");
			gets(s[i].group);
			printf("Section\n");
			gets(s[i].sec);
			printf("Gender\n");
			gets(s[i].gender);
		
	}
	
	for(i=0;i<10;i++)
	{
		printf("Student %d:\n",i+1);
		
		printf("Name: %s\t Gender: %s\n",s[i].name,s[i].gender);
		
		printf("Class: %s\t Section: %s\n\n",s[i].group,s[i].sec);
	}
}
