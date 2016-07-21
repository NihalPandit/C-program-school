#include<stdio.h>
const int MAX=3;

int main()
{
	int var[] = {50,100,150};
	int i;
	int *ptr[MAX];
	for(i=0;i<MAX;i++)
	{
		ptr[i]=&var[i];
		
	}
	for(i=0;i<MAX;i++)
	{
		printf("Value of var[%d] = %d\n",i,*ptr[i]);
	}
	system("pause");
}
