#include<stdio.h>

const int MAX=3;

int main()
{
	int var[]={50,100,150};
	int i;
	int *ptr;
	
	
	ptr=var;
	i=0;
	while(ptr <= &var[MAX-1])
	{
		printf("var[%d] : Address = %x, value = %d\n ",i,ptr,*ptr);
		ptr++;
		i++;
	}
	
	system("pause");
	
}
