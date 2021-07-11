#include<stdio.h>

main()
{
	struct Student
	{
		int roll;
		char name[50];
		char branch[20];
		char sec;
		int Group;
		float cgpa;
		char gender;
	} st;
	
	int sst,stotal;
	
	sst = sizeof(st);
	
	stotal = sizeof(st.branch) + sizeof(st.cgpa) + sizeof(st.gender) + sizeof(st.Group) + sizeof(st.name) + sizeof(st.roll) + sizeof(st.sec);
	
	printf("Size of the Structure is = %d\n",sst);
	printf("Sum of sizes of all the members of the Structure is = %d\n",stotal);
}
