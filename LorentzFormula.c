#include <stdio.h>

main()
{
 int height,weight,result,gender;
 
 printf("please enter your gender (male 1 and female 2)\n");
 scanf("%d",&gender);
 
 printf("please enter your height  \n");
 scanf("%d",&height);
	
 printf("please enter the weight \n");
 scanf("%d",&weight);
 
 if (gender==1)
 {
 result=(height-100)-((height-150)/4);
 }
 if (gender==2)
 {
 result=(height-100)-((height-150)/2.5);
 }
 
 printf("result = %d\n",result);
 
 if (weight => result)
 {
 	printf("You might need to watch your diet\n");
 }
 if (weight <= result)
 {
 	printf("You are OK!.....\n");
 }
 system("PAUSE");
}
