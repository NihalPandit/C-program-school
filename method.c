#include<stdio.h>
#include<stdlib.h>

void test (int val[], int max){
	int j;
	for(j=0;j<max;j++)
	{
		val[j] += 25;
		
	}
}

main(){
	void test(int val[], int max);
	int j, list[5];
	
	for(j=0;j<5;j++)
	{
		list[j]=j;
		
	}
	test(&list[2],5);
	for (j=0;j<5;j++)
	{
		printf("\n");
		printf("%d", list[j]);
		
			}
			printf("\n\n\n");
			system("pause");
}
