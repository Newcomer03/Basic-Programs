#include<stdio.h>

main()
{
    FILE *fe;
    char ch1,ch2;
    int size1,size2,size3,i;
    fe=fopen("C:\\Users\\FAMILY\\Desktop\\Pandemic Break Course\\Employee.txt","w");
    struct employee
    {
    	char Eno[20];
    	char Ename[20];
    	char Sal[12];
	} emp;
	
    printf("Enter employee Number\n");
	gets(emp.Eno);
	printf("Enter Employee Name\n");
	gets(emp.Ename);
	printf("Enter Employee Salary\n");
	gets(emp.Sal);
	
	size1 = sizeof(emp.Eno);
	size2 = sizeof(emp.Ename);
	size3 = sizeof(emp.Sal);
	    
    if(fe==NULL)
    {
    	puts("File does not exist.....cannot open the file");
    	return 0;
    }
    else
    {
    	for(i=0;emp.Eno[i]!='\0';i++)
		{
			ch2 = fputc(emp.Eno[i],fe);
		}
		ch2 = fputc('\n',fe);
		for(i=0;emp.Ename[i]!='\0';i++)
		{
			ch2 = fputc(emp.Ename[i],fe);
		}
		ch2 = fputc('\n',fe);
		for(i=0;emp.Sal[i]!='\0';i++)
		{
			ch2 = fputc(emp.Sal[i],fe);
		}
		ch2 = fputc('\n',fe);
	}
	fclose(fe);
	
	fe=fopen("C:\\Users\\FAMILY\\Desktop\\Pandemic Break Course\\Employee.txt","r");
	
    ch1=fgetc(fe);
    printf("Employee Number : ");
    while(ch1!='\n')
    {
    	printf("%c",ch1);
    	ch1=fgetc(fe);
    }
    ch1=fgetc(fe);
    printf("\n");
    printf("Employee Name : ");
    while(ch1!='\n')
    {
    	printf("%c",ch1);
    	ch1=fgetc(fe);
    }
    ch1=fgetc(fe);
    printf("\n");
    printf("Employee Salary : ");
    while(ch1!='\n')
    {
    	printf("%c",ch1);
    	ch1=fgetc(fe);
    }
    
    fclose(fe);
   
    return 0;
}
