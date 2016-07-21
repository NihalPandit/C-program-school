//#include<stdio.h>
//main()
//{
//	void test(int);
//	int n=10;
//	printf("%d\n",n);
//	test(n);
//	printf("%d\n",n);
//	system("pause");
//}
//void test(int a)
//{
//	a=a+5;
//	printf("%d\n",a);
//}

#include<stdio.h>

main()
{
	void test(int *);
	int n=10;
	printf("%d\n",n);
	test(&n);
	printf("%d\n",n);
	system("pause");
}
void test(int *a)
{
	*a=*a+5;
	printf("%d\n",*a);
}
