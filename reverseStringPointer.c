#include<stdio.h>
#include <string.h>
char word[10];
main()
{
//	char *institution = "Sheridan College";
//	char c;
//	string var[strlen(institution)];
//	while(*institution != '\0')
//	{
//	*institution=var;
//	
//	
//	}
//	int i;
//	for(i=strlen(institution);i>0;i--)
//	{
//	printf("%c",*institution++);	
//	}
//	printf("\n\n\n\n");

printf("Enter the string");
scanf("%s",&word);
char *inst;
inst=&word;
int wordlength=strlen(inst);
int j;
for(j=wordlength;j>=0;j--)
{
	printf("%s",inst);
}





	system("pause");
}
