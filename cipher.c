/// cipher
#include <stdio.h>
#include <string.h>

main()
{
	char userString[200],cipheredString[200],dCipheredString[200];
	char abc[26] = "abcdefghijklmnopqrstuvwxyz";
	char ABC[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char cipher[26]= "tmesfkjaxnovluchzgybwpdriq";
	int i,a,strLength;
	
	printf("Enter a string to cipher: ");
    scanf("%s",&userString);
    
	strLength = strlen(userString);
	
	for(i = 0; i<strLength; i++){
		char c = userString[i];
		for(a = 0; a<25; a++){
			if (c == abc[a] || c == ABC[a]){
				break;
			}
		}
		cipheredString[i] = cipher[a];
	}
	
	for(i = 0; i<strLength; i++){
		char c = cipheredString[i];
		for(a = 0; a<25; a++){
			if (c == cipher[a]){
				break;
			}
		}
		dCipheredString[i] = abc[a];
	}
	
	printf("\nEntered--String: %s",userString);
	printf("\nCiphered-String: %s",cipheredString);
	printf("\nDecoded--String: %s",dCipheredString);
	
}
