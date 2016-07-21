#include <stdio.h>

main()
{
 int num1,num2,gcf,i,lcm;
 printf("please enter num1 \n");
 scanf("%d",&num1);
 
 printf("please enter num2 \n");
 scanf("%d",&num2);
 
 for(i=1; i<=num1 || i<=num2; ++i)
 {
 	if(num1%i==0 && num2%i==0)
	 {
 		gcf=i;
	 }
 	
 }
 printf("GCF is %d\n",gcf);
 
 lcm=((num1*num2)/gcf);
 printf("LCM is %d\n",lcm);
 system("PAUSE");
}
