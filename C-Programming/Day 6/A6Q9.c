#include<stdio.h>

main()
{
	struct Employee
	{
		char empId[50];
		char fname[50];
		char mname[50];
		char lname[50];
		char doj[20];
		char desig[20];
		char grade[20];
		char salary[20];
	} emp;
	
	printf("Enter employee ID\n");
	gets(emp.empId);
	printf("Enter First Name\n");
	gets(emp.fname);
	printf("Enter Middle Name\n");
	gets(emp.mname);
	printf("Enter Last Name\n");
	gets(emp.lname);
	printf("Enter Date of Joining\n");
	gets(emp.doj);
	printf("Enter Designation\n");
	gets(emp.desig);
	printf("Enter Grade\n");
	gets(emp.grade);
	printf("Enter Salary\n");
	gets(emp.salary);
	
	printf("\nName : %s %s %s\n",emp.fname,emp.mname,emp.lname);
		
	printf("Employee ID : %s\t Date of Joining : %s\n",emp.empId,emp.doj);
	
	printf("Designation : %s\t Grade : %s\n",emp.desig,emp.grade);

	printf("Salary : %s",emp.salary);
	
}
