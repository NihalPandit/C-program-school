#include <stdio.h>
#include <string.h>

main()
{
	char userInput[99], *ptrInputWord;
	char OriginalAlphabet[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char OriginalAlphabetA[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char KeyAlphabet[]= {'t','m','e','s','f','k','j','a','x','n','o','v','l','u','c','h','z','g','y','b','w','p','d','r','i','q'};
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
			if (c == OriginalAlphabet[a] || c == OriginalAlphabetA[a]){
				break;
			}
		}
		*ptrInputWord = KeyAlphabet[a];
		*ptrInputWord++;
		i++;
	}
	ptrInputWord = first;
	
	
	printf("\nCiphered-String: ");
	while(*ptrInputWord != '\0'){
		printf("%c",*ptrInputWord);
		char c = *ptrInputWord;
			for(a = 0; a<25; a++){
			if (c == KeyAlphabet[a]){
				break;
			}
		}
		*ptrInputWord = OriginalAlphabet[a];
		*ptrInputWord++;
		i++;
	}
	ptrInputWord = first;
	
	printf("\nDecoded--String: ");
	while(*ptrInputWord != '\0'){
			printf("%c",*ptrInputWord++);
	}
}

