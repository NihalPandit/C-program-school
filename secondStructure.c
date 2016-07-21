#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Students
{
	char lastName[50];
	char firstName[50];
	char address[100];
	int studentID;
};
void printStudent(struct Students std1);

int main()
{
	struct Students std1;
	struct Students std2;
	
	strcpy(std1.lastName,"capucine");
	strcpy(std1.firstName,"AJ");
	strcpy(std1.address,"16 science street");
	std1.studentID = 222333;
	
	strcpy(std2.lastName,"Gayle");
	strcpy(std2.firstName,"chris");
	strcpy(std2.address,"20 maths street");
	std2.studentID = 444555;
	

	printStudent(std1);
	printf("\n\n\n\n");
	printStudent(std2);
system("pause");
}
void printStudent(struct Students std)
{
	printf("Student Attributes....\n");
	printf("...........................\n");
	printf("Student2 lastname....%s\n",std.lastName);
	printf("Student2 firstName....%s\n",std.firstName);
	printf("Student2 address....%s\n",std.address);
	printf("Student2 firstName....%d\n",std.studentID );
}
