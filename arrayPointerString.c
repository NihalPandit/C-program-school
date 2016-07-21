#include<stdio.h>
const int MAX=4;

int main()
{
	char *names[]={"AJ","Capusine","Patel","Patidar"};
	int i;

	for(i=0;i<MAX;i++)
	{
		printf("Value of var[%d] = %s\n",i, names[i]);
	}
	system("pause");
}
