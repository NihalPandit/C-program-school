#include<stdio.h>
main()
{
	char *institution = "Sheridan College";
	while(*institution != '\0')
	{
		printf("%c",*institution++);
	
	}
	printf("\n\n\n\n");
	system("pause");
}
