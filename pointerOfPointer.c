#include<stdio.h>
int main()
{
	int var;
	int *ptr;
	int **pptr;
	 
	var=500;
	ptr=&var;
	 
	pptr=&ptr;
	 
	printf("Value of var = %d\n",var);
	printf("value available at *ptr = %d\n",*ptr);
	printf("value available at **pptr = %d\n",**pptr);
	  
	system("pause");
}
