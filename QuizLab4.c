#include <stdio.h>
int main(){
	char *institution = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while(*institution != '\0'){
		printf("%c",*institution++);
		*institution++;
	}
	printf("\n\n\n");
	system("PAUSE");
}
