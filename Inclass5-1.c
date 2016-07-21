#include<stdio.h>
#include<stdlib.h>
#define str1 "str1"
#define MaxStack 10

typedef struct
{
	char top;
	int ST[MaxStack];
	
}StackType, *Stack;

Stack initStack()
{
	Stack sp = (Stack)malloc(sizeof(StackType));
	return sp;
}

char empty(Stack s)
{
	return (s -> top == -1);
}
 
 void push(Stack s, char *n)
 {
 	if(s -> top == MaxStack - 1)
 	{
 		printf("\noverflow");
		 exit(1);	
	}
	++(s -> top);
	s -> ST[s -> top]=*n;
 }
 
 char pop(Stack s)
 {
 	printf("haha");
 	if(empty (s))
 	{
 		
 		printf("Stack is empty");
	 }
	  char hold[MaxStack];
	  strcpy(hold,s->ST[s -> top]);
	 --(s -> top);
	 return hold;
 }

 
 main()
 {
 	char n[MaxStack];
 	Stack S = initStack();
 	printf("Please Enter the province here: ");
 	scanf("%s",&n);
 	while(!strcmp(n,"q"))
 	{
 		push(S,n);
 		printf("haha");
 		printf("%s",S->)
		 scanf("%s",&n);
 		
 	
	 }
	 printf("\n");
	 	 
	 while(!empty(S))
	 {
	 	printf("hH");
	 	printf("%s - ",pop(S));
	 }
	 printf("\n\n");
	 system("pause");
 }
 
 
 
 
//Queue initQueue();
//int empty(Queue Q);
//void enqueue(Queue Q,int n);
//int dequeue(Queue Q);
