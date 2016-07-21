#include<stdio.h>

const int MAX=3;

int main()
{
	int var[]={50,100,150};
	int i;
	int *ptr;
	
	
	ptr=var;
	printf("Addresss of the Array at var = %x\n",var);
	printf("Addresss of the Array var by ptr = %x\n\n\n",ptr);
	for(i=0;i<MAX;i++)
	{
		printf("Address of var[%d] = %x\n",i,ptr);
		printf("Address of var[%d] = %d\n",i,*ptr);
		ptr++;
		
	}
	system("pause");
	
}
