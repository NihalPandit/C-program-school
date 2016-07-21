#include<stdio.h>

const int MAX=3;

int main()
{
	int var[]={50,100,150};
	int i;
	int *ptr;
	
	
	ptr=var;
	printf("value pointed to by ptr = %d\n",*ptr);
	printf("ptr= %d\n\n",ptr);
	
	(*ptr)++;
	
	printf("New value pointed to by ptr = %d\n",*ptr);
	printf("ptr= %d\n\n",ptr);
	(*ptr)++;
	
	printf("New value pointed to by ptr = %d\n",*ptr);
	printf("ptr= %d\n\n",ptr);
	
	system("pause");
	
}
