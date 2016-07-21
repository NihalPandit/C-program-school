#include<stdio.h>
int main()
{
	int var = 50;
	int *ip;
	
	ip=&var;
	printf("Address of var variable: %x\n",&var);

printf("Address of ip variable: %x\n",ip);
printf("value of *ip variable: %d\n",*ip);

system("pause");

}
