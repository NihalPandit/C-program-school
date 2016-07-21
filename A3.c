#include <stdio.h>
#include <string.h>

typedef struct
{
	char *OriginalAlphabet;
	char *OriginalAlphabetA;
	char *KeyAlphabet;
} Cipher;

main()
{
	Cipher c1;
	char userInput[99], *ptrInputWord, *firstOa, *firstOA, *firstk;

	c1.OriginalAlphabet ="abcdefghijklmnopqrstuvwxyz";
	firstOa = c1.OriginalAlphabet;
	c1.OriginalAlphabetA = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	firstOA = c1.OriginalAlphabetA;
	c1.KeyAlphabet= "tmesfkjaxnovluchzgybwpdriq";
	firstk = c1.KeyAlphabet;
	
	printf("Enter a string to cipher: ");
	scanf("%s",&userInput);
    ptrInputWord = &userInput;
	char *first;
	first = ptrInputWord;
	
	printf("\nEntered--String: ");
		
	while(*ptrInputWord != '\0'){
		printf("%c",*ptrInputWord);	
		char c = *ptrInputWord;
		while(*ptrInputWord == *c1.OriginalAlphabet || *ptrInputWord == *c1.OriginalAlphabetA){
			if (*ptrInputWord == *c1.OriginalAlphabet || *ptrInputWord == *c1.OriginalAlphabetA){
				break;
			}
			*c1.KeyAlphabet++;
			*c1.OriginalAlphabetA++;
			*c1.OriginalAlphabet++;
		}
		*ptrInputWord = *c1.KeyAlphabet;
		*ptrInputWord++;
		c1.OriginalAlphabetA = firstOA;
		c1.OriginalAlphabet = firstOa;
		c1.KeyAlphabet = firstk;
	}
	ptrInputWord = first;
	c1.OriginalAlphabetA = firstOA;
	c1.OriginalAlphabet = firstOa;
	c1.KeyAlphabet = firstk;
	
	printf("\nCiphered-String: ");
	while(*ptrInputWord != '\0'){
	printf("%c",*ptrInputWord);	
		char c = *ptrInputWord;
		while( c1.OriginalAlphabetA != '\0'){
			if (*ptrInputWord == c1.KeyAlphabet){
				break;
			}
			*c1.KeyAlphabet++;
			*c1.OriginalAlphabetA++;
			*c1.OriginalAlphabet++;
		}
		*ptrInputWord = *c1.OriginalAlphabet;
		*ptrInputWord++;
		c1.OriginalAlphabetA = firstOA;
		c1.OriginalAlphabet = firstOa;
		c1.KeyAlphabet = firstk;
	}
	ptrInputWord = first;
	
	printf("\nDecoded--String: ");
	while(*ptrInputWord != '\0'){
			printf("%c",*ptrInputWord++);
	}
}
