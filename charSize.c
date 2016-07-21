#include<stdio.h>
int main()
{
	printf("A char is of : %d%s", sizeof(char),"byte(s)\n");
	printf("A unsigned char is of : %d%s", sizeof(unsigned char),"byte(s)\n");
	printf("A signed char is of : %d%s", sizeof(signed char),"byte(s)\n");
	printf("A short is of : %d%s", sizeof(short),"byte(s)\n");
	printf("A unsigned short is of : %d%s", sizeof(unsigned short),"byte(s)\n");
	printf("A int is of : %d%s", sizeof(int),"byte(s)\n");
	printf("A unsigned int is of : %d%s", sizeof(unsigned int),"byte(s)\n");
	printf("A long is of : %d%s", sizeof(long),"byte(s)\n");
	printf("A unsigned long is of : %d%s", sizeof(unsigned long),"byte(s)\n");
	printf("A float is of : %d%s", sizeof(float),"byte(s)\n");
	printf("A double is of : %d%s", sizeof(double),"byte(s)\n");
	printf("A long double is of : %d%s", sizeof(long double),"byte(s)\n");
	system("pause");
}
