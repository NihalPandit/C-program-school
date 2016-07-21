#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct province{
  
    char name[20];
   
};


struct stackNode {
	struct province p;
	struct stackNode *nextPtr;
};

typedef struct stackNode StackNode;
typedef StackNode *StackNodePtr;

void push(StackNodePtr *topPtr,struct province info);
struct province pop(StackNodePtr *topPtr);
int isEmpty(StackNodePtr topPtr);
void printStack(StackNodePtr currentPtr);



main(void)
{
	StackNodePtr stackPtr = NULL;
	char nam[20];

while (1)
{
	
	printf("Enter a province: ");
				scanf("%s",nam);
				if(strcmp(nam,"quit") == 0)break;
				struct province pl;
				strcpy(pl.name,nam);
                push(&stackPtr,pl);
}

	 if(!isEmpty(stackPtr))
				{
				   struct province s_prov1=pop(&stackPtr);
                   printf("Province Name: %s\n",s_prov1.name);
				}
				printStack(stackPtr);
    		
}

void push(StackNodePtr *topPtr, struct province info) {
	StackNodePtr newPtr;

	newPtr = malloc(sizeof(StackNode));

	if(newPtr != NULL) {
		newPtr->p = info;
		newPtr->nextPtr = *topPtr;
		*topPtr = newPtr;
		
	} 
}

struct province pop(StackNodePtr *topPtr) {
	StackNodePtr tempPtr;
	struct province popValue;

	tempPtr = *topPtr;
	popValue = (*topPtr)->p;
	*topPtr = (*topPtr)->nextPtr;
	free(tempPtr);
	return popValue;
}

void printStack(StackNodePtr currentPtr) {
        StackNodePtr currnPtr = currentPtr;
	if(currnPtr == NULL) {
		printf("There is no province.\n\n");
	} else {
	    
		while(currnPtr != NULL)
            {
            struct province s_prov =currnPtr->p;
			printf("Province Name: %s\n",s_prov.name);
			currnPtr = currnPtr->nextPtr;
		}
        printf("-----------------------------------------\n");
        printf("The size of the stack is %d",sizeof(*currentPtr));
	}
}

int isEmpty(StackNodePtr topPtr) {
	return topPtr == NULL;
}


