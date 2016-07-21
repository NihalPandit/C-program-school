#include<stdio.h>
#include<conio.h>
#include<string.h>

typedef struct 
{
	char lastName[50];
	char firstName[50];
	char address[100];
	int studentID;
}MyStudentType;


int main()
{
	MyStudentType std1;

	
	strcpy(std1.lastName,"capucine");
	strcpy(std1.firstName,"AJ");
	strcpy(std1.address,"16 science street");
	std1.studentID = 222333;
	
	printf("Student Attributes....\n");
	printf("...........................\n");
	printf("Student1 lastname....%s\n",std1.lastName);
	printf("Student1 firstName....%s\n",std1.firstName);
	printf("Student1 address....%s\n",std1.address);
	printf("Student1 firstName....%d\n",std1.studentID );
	

	
system("pause");
}

