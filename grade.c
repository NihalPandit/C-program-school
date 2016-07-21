#include <stdio.h>

main()
{
 int grade;
 printf("please enter the number \n");
 scanf("%d",&grade);
 
 if(grade<100 && grade >90){
 	printf("you got A ");
 }
  if(grade<89 && grade >80){
 	printf("you got B ");
 }
 if(grade<79 && grade >70){
 	printf("you got C ");
 }
 if(grade<69 && grade >60){
 	printf("you got D ");
 }
 if(grade<59 && grade >0){
 	printf("you got F ");
 }
 
 system("PAUSE");
}
