
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct player{
  //  int playId;
    char name[20];
   // float height;
};

// Function Prototypes
struct stackNode {
	struct player p;
	struct stackNode *nextPtr;
};

typedef struct stackNode StackNode;
typedef StackNode *StackNodePtr;

void push(StackNodePtr *topPtr,struct player info);
struct player pop(StackNodePtr *topPtr);
int isEmpty(StackNodePtr topPtr);
void printStack(StackNodePtr currentPtr);
void instructions(void);
//int isDuplicate(StackNodePtr topPtr,int value);

int main(void)
{
	StackNodePtr stackPtr = NULL;
	int choice;
//	int ide;
	char nam[20];
//	float height;

	instructions();  // user menu
    printf("\nPlease Enter you Choice Command: ");
	scanf("%d", &choice); // allow user to enter choice

	while(choice != 5) {
		switch(choice) {
			case 1:
				//option to View value at top of stack
				/*if(!isEmpty(stackPtr))
                {
                    struct player v_top = stackPtr->p;
                    printf("\nData of the Player Recently Added:");
                    printf("\n\nPlayer ID: %d\nPlayer Name: %s\nPlayer Height: %f",v_top.playId,v_top.name,v_top.height);
                }
                else{
                    printf("------------------------\nNo DATA to Show\n------------------------");
                }
				break;*/

			case 2:
				//option to push value onto stack
                /*printf("\nEnter a ID: ");
				scanf("%d",&ide);
				if(isDuplicate(stackPtr,ide))
                {*/
                printf("Enter a name: ");
				scanf("%s",nam);
				/*printf("Enter a height: ");
				scanf("%f",&height);*/
				struct player pl;
				//pl.playId=ide;
                strcpy(pl.name,nam);
                //pl.height=height;
				push(&stackPtr,pl);
				//}
				//printStack(stackPtr);
				break;
            case 3:
                 // option to pop value from stack
                // ensure to check that stack is non-empty
                if(!isEmpty(stackPtr))
				{
				   struct player r_play=pop(&stackPtr);
                   printf("\nDetails of Player deleted:");
                   printf("Player Name: %s\n",r_play.name);
				}
				else
                {
                    printf("\nNo DATA to be Deleted\n");
                }
				break;
            case 4:
                //option to print all the values in the stack
                printStack(stackPtr);
                break;

			default:

				printf("Invalid choice.\n\n");
				instructions();
				break;
		}
		printf("\n\nPlease Enter you Choice Command: ");
		scanf("%d",&choice);
	}
	printf("\nExit Successful!! Good Bye!!\n");
    exit(0);

}

void instructions(void) {
	printf(
		"Welcome to Player Regestration!! \nEnter choice:\n 1). View the Recent Player Added\n 2). Add a New Player\n 3). Delete the Player on TOP \n 4). Print all the data \n 5). Exit the Stack");
}

void push(StackNodePtr *topPtr, struct player info) {
	StackNodePtr newPtr;

	newPtr = malloc(sizeof(StackNode));

	if(newPtr != NULL) {
		newPtr->p = info;
		newPtr->nextPtr = *topPtr;
		*topPtr = newPtr;
		printf("\nPlayer Data Inserted Successfully!!\n");
	} else {
		printf("not inserted. No memory available.\n");
	}
}

struct player pop(StackNodePtr *topPtr) {
	StackNodePtr tempPtr;
	struct player popValue;

	tempPtr = *topPtr;
	popValue = (*topPtr)->p;
	*topPtr = (*topPtr)->nextPtr;
	free(tempPtr);
	return popValue;
}

void printStack(StackNodePtr currentPtr) {
        StackNodePtr currnPtr = currentPtr;
	if(currnPtr == NULL) {
		printf("There is no Data.\n\n");
	} else {
	    printf("Info of all Players\n-----------------------------------------\n");
		while(currnPtr != NULL)
            {
            struct player d_play =currnPtr->p;
			printf("Player Name: %s\n",d_play.name);
			currnPtr = currnPtr->nextPtr;
		}
        printf("-----------------------------------------");
	}
}

int isEmpty(StackNodePtr topPtr) {
	return topPtr == NULL;
}

/*int isDuplicate(StackNodePtr topPtr,int value){
    StackNodePtr checkPtr = topPtr;
    int retVal=1;
    if(isEmpty(checkPtr))
    {
        retVal=1;
    }else
    {
        while(checkPtr!=NULL){
            if(checkPtr->p.playId==value)
            {
                retVal=0;
                printf("\n------------------------------\n!!Player ID Already exist!!\n------------------------------");
            }
            checkPtr = checkPtr->nextPtr;
        }
    }
    return retVal;
}
*/
