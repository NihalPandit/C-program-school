#include <stdio.h>
#include <string.h>

main()
{
	char userInput[99], *ptrInputWord, *firstOa, *firstOA, *firstk;
	char *OriginalAlphabet ="abcdefghijklmnopqrstuvwxyz";
	firstOa = OriginalAlphabet;
	char *OriginalAlphabetA = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	firstOA = OriginalAlphabet;
	char *KeyAlphabet= "tmesfkjaxnovluchzgybwpdriq";
	firstk = KeyAlphabet;
	
	printf("Enter a string to cipher: ");
	scanf("%s",&userInput);
    ptrInputWord = &userInput;
	char *first;
	first = ptrInputWord;
	
	printf("\nEntered--String: ");
		
	while(*ptrInputWord != '\0'){
		printf("%c",*ptrInputWord);	
		char c = *ptrInputWord;
		while(*ptrInputWord == *OriginalAlphabet || *ptrInputWord == *OriginalAlphabetA){
			if (*ptrInputWord == *OriginalAlphabet || *ptrInputWord == *OriginalAlphabetA){
				break;
			}
			*KeyAlphabet++;
			*OriginalAlphabetA++;
			*OriginalAlphabet++;
		}
		*ptrInputWord = *KeyAlphabet;
		*ptrInputWord++;
		OriginalAlphabetA = firstOA;
		OriginalAlphabet = firstOa;
		KeyAlphabet = firstk;
	}
	ptrInputWord = first;
	OriginalAlphabetA = firstOA;
	OriginalAlphabet = firstOa;
	KeyAlphabet = firstk;
	
	printf("\nCiphered-String: ");
	while(*ptrInputWord != '\0'){
	printf("%c",*ptrInputWord);	
		char c = *ptrInputWord;
		while(*OriginalAlphabetA != '\0'){
			if (*ptrInputWord == *KeyAlphabet){
				break;
			}
			*KeyAlphabet++;
			*OriginalAlphabetA++;
			*OriginalAlphabet++;
		}
		*ptrInputWord = *OriginalAlphabet;
		*ptrInputWord++;
		OriginalAlphabetA = firstOA;
		OriginalAlphabet = firstOa;
		KeyAlphabet = firstk;
	}
	ptrInputWord = first;
	
	printf("\nDecoded--String: ");
	while(*ptrInputWord != '\0'){
			printf("%c",*ptrInputWord++);
	}
}
