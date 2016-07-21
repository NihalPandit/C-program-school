#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
	char OriginalAlphabet[26];
	char OriginalAlphabetA[26];
	char KeyAlphabet[26];
} Cipher;
int main()
{
	Cipher c1;
	char userInput[99], *ptrInputWord;

	strcpy(c1.OriginalAlphabet,"abcdefghijklmnopqrstuvwxyz");
	strcpy(c1.OriginalAlphabetA,"ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	strcpy(c1.KeyAlphabet,"tmesfkjaxnovluchzgybwpdriq");
		
	int i=0,a=0;
	
	printf("Enter a string to cipher: ");
	scanf("%s",&userInput);
    ptrInputWord = &userInput;
	char *first;
	
	first = ptrInputWord;
	
	printf("\nEntered--String: ");
		
	while(*ptrInputWord != '\0'){
		printf("%c",*ptrInputWord);
		char c = *ptrInputWord;
		for(a = 0; a<25; a++){
			if (c == c1.OriginalAlphabet[a]|| c == c1.OriginalAlphabetA[a]){
				break;
			}
		}
		*ptrInputWord = c1.KeyAlphabet[a];
		*ptrInputWord++;
		i++;
	}
	ptrInputWord = first;
	
	
	printf("\nCiphered-String: ");
	while(*ptrInputWord != '\0'){
		printf("%c",*ptrInputWord);
		char c = *ptrInputWord;
			for(a = 0; a<25; a++){
			if (c == c1.KeyAlphabet[a]){
				break;
			}
		}
		*ptrInputWord = c1.OriginalAlphabet[a];
		*ptrInputWord++;
		i++;
	}
	ptrInputWord = first;
	
	printf("\nDecoded--String: ");
	while(*ptrInputWord != '\0'){
			printf("%c",*ptrInputWord++);
	}
}


