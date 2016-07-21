#include<stdio.h>
int main()
{
	int len;
	char str1[20]="Software";
	char str2[30]=" Engineering";
	char str3[20];
	
	strcpy(str3,str1);
	printf("strcpy (str3,str1): %s\n",str3);
	
	strcat(str1,str2);
	printf("strcat (str1,str2): %s\n",str1);
	
	len=strlen(str1);
	printf("strlen (str1): %d\n",len);
	system("pause");
}
