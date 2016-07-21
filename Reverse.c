#include <stdio.h>

main()
{
 int number;
 printf("please enter the number \n");
 scanf("%d",&number);
 
 int num=number/10;
 int rem=number%10;
 
  int result=rem*10+num;
  
 printf("result %d\n",result);
 
 system("PAUSE");
}

