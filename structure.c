#include<stdio.h>
#include<conio.h>
#include<string.h>

struct students
{
	char lastName[50];
	char firstName[50];
	char address[100];
	int studentID;
};

int main()
{
	struct students std1;
	struct students std2;
	
	strcpy(std1.lastName,"capucine");
	strcpy(std1.firstName,"AJ");
	strcpy(std1.address,"16 science street");
	std1.studentID = 222333;
	
	strcpy(std2.lastName,"Gayle");
	strcpy(std2.firstName,"chris");
	strcpy(std2.address,"20 maths street");
	std2.studentID = 444555;
	
	printf("Student Attributes....\n");
	printf("...........................\n");
	printf("Student1 lastname....%s\n",std1.lastName);
	printf("Student1 firstName....%s\n",std1.firstName);
	printf("Student1 address....%s\n",std1.address);
	printf("Student1 firstName....%d\n",std1.studentID );
	
	printf("Student Attributes....\n");
	printf("...........................\n");
	printf("Student2 lastname....%s\n",std2.lastName);
	printf("Student2 firstName....%s\n",std2.firstName);
	printf("Student2 address....%s\n",std2.address);
	printf("Student2 firstName....%d\n",std2.studentID );
}

