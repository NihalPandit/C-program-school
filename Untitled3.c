#include<stdio.h>
#include<stdlib.h>
#define RogueValue -9999


typedef struct
{
	char num[99];
	struct node *next;
	
}Node, *Nodeptr;

typedef struct
{
	Nodeptr top;
	
}StackType, *Stack;

Stack initStack()
{
	Stack sp = (Stack)malloc(sizeof(StackType));
	sp->top=NULL;
	return sp;
}

int empty(Stack s)
{
	return (s -> top == NULL);
}
 
 void push(Stack s, char n[99])
 {
 	Nodeptr np = (Nodeptr)malloc(sizeof(Node));
 	strcpy(np->num,n);
 	np->next=s->top;
 	s->top=np;
 }
 
 char pop(Stack s)
 {
 	if(empty (s))
 	{
 		return RogueValue;
	 }
	 char hold[99];
	 strcpy(hold,s->top->num);
	 Nodeptr temp=s->top;
	 s->top=s->top->next;
	 free(temp);
	 return hold;
 }
 
 main()
 {
 	char t[99] = "0";
 	char n[99];
 	Stack S = initStack();
 	scanf("%s",&n);
 	while(strcmp(n,t) != 0)
 	{
 		push(S,n);
 		scanf("%s",&n);
	 }
	 printf("\n");
	 while(!empty(S))
	 {
	 	printf("%s - ",pop(S));
	 }
	 printf("\n\n");
	 system("pause");
 }
