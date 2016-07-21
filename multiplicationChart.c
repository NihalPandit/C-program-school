#include <stdio.h>
int main()
{
	int i,num;
	printf("Please enter the number from 0 to 10 for multiplication chart\n");
	num=scanf("%d \n");
	

	for(i=1;i<=10;i++)
	{
		printf("%d X %d = %d\n",num,i, (i*num));
	}
	
	system("pause");
}
