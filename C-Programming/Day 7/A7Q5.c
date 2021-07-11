/*This program contains some errors. I haven't
  understood the concept clearly so I couldn't
  correct my mistakes. Also I would like to apologize 
  for my late submission.*/

#include<stdio.h>

main()
{
	FILE *fs;
	struct Stud
	{
		char name[50];
		int roll;
		int mark1;
		int mark2;
		int mark3;
		int total;
		char grade;		
	} s[5];
	
	fs = fopen("C:\\Users\\FAMILY\\Desktop\\Pandemic Break Course\\Student.txt","w");
	
	int i,roll;
	for(i=0;i<5;i++)
	{
		printf("Enter Credentials For Student %d\n",i+1);
		
			printf("Name:\n");
			gets(s[i].name);
			printf("Roll No:\n");
			scanf("%d",&s[i].roll);
			printf("Mark in first subject out of 100:\n");
			scanf("%d",&s[i].mark1);
			printf("Mark in second subject out of 100:\n");
			scanf("%d",&s[i].mark2);
			printf("Mark in third subject out of 100:\n");
			scanf("%d",&s[i].mark3);
			
			s[i].total = s[i].mark1 + s[i].mark2 + s[i].mark3;
			
			if((s[i].total/3)>90 && (s[i].total/3)<=100)
			s[i].grade = 'A';
			if((s[i].total/3)>80 && (s[i].total/3)<=90)
			s[i].grade = 'B';
			if((s[i].total/3)>70 && (s[i].total/3)<=80)
			s[i].grade = 'C';
			if((s[i].total/3)>60 && (s[i].total/3)<=70)
			s[i].grade = 'D';
			if((s[i].total/3)>50 && (s[i].total/3)<=60)
			s[i].grade = 'E';
			if((s[i].total/3)>=0 && (s[i].total/3)<=50)
			s[i].grade = 'F';
			
			fprintf(fs,"%s %d %d %d %d %d %c\n",s[i].name,s[i].roll,s[i].mark1,s[i].mark2,s[i].mark3,s[i].total,s[i].grade);
	}
	fclose(fs);
	fs = fopen("C:\\Users\\FAMILY\\Desktop\\Pandemic Break Course\\Student.txt","r+");
	
	printf("Enter the roll no. for which you want to make changes:\n");
	scanf("%d",&roll);
	
	for(i=0;i<5;i++)
	{
		if(roll==s[i].roll)
		{
			printf("Name:\n");
			gets(s[i].name);
			printf("Mark in first subject out of 100:\n");
			scanf("%d",&s[i].mark1);
			printf("Mark in second subject out of 100:\n");
			scanf("%d",&s[i].mark2);
			printf("Mark in third subject out of 100:\n");
			scanf("%d",&s[i].mark3);
			
			s[i].total = s[i].mark1 + s[i].mark2 + s[i].mark3;
			
			if((s[i].total/3)>90 && (s[i].total/3)<=100)
			s[i].grade = 'A';
			if((s[i].total/3)>80 && (s[i].total/3)<=90)
			s[i].grade = 'B';
			if((s[i].total/3)>70 && (s[i].total/3)<=80)
			s[i].grade = 'C';
			if((s[i].total/3)>60 && (s[i].total/3)<=70)
			s[i].grade = 'D';
			if((s[i].total/3)>50 && (s[i].total/3)<=60)
			s[i].grade = 'E';
			if((s[i].total/3)>=0 && (s[i].total/3)<=50)
			s[i].grade = 'F';
			
			fprintf(fs,"%s %d %d %d %d %d %c\n",s[i].name,s[i].roll,s[i].mark1,s[i].mark2,s[i].mark3,s[i].total,s[i].grade);
		}
	}
	fclose(fs);
}
