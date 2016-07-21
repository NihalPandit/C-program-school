#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

typedef struct
{
	
int num;
int den;

}fraction;



int main()
{
	double d; 
	Fraction a,b;
	Fraction x;
	
printf("input the first Fraction: ");
scanf("%d%d",&a.num,&a.den);
	
printf("input the second Fraction: ");
scanf("%d%d",&b.num,&b.den);

d=(double)x.num/(double)x.den;
printf("\n the result is : %d/%d",x.num,x.den);
printf(".........what is equal to : %.3f\n\n",d);

system("pause");
}

Fraction multiplyFraction(Fraction a,Fraction b)
{
Fraction c;

c.num=a.num=b.num;
c.den=a.den=b.den;
	return c;
}
