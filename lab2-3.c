#include<stdio.h>
int main()
{
	int value;
printf("Please enter the value  \n");
scanf("%d",&value);
int *point;
printf("Please enter the value  %x\n",value);
printf("Please enter the value  %x\n",&value);
point=&value;
printf("Please enter the value  %d\n",*point);
system("pause");

}
