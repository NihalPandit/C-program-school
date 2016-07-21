#include<stdio.h>
#include<stdlib.h>
#define RogueValue -9999


typedef struct
{
	int num;
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
 
 void push(Stack s, int n)
 {
 	Nodeptr np = (Nodeptr)malloc(sizeof(Node));
 	np->num=n;
 	np->next=s->top;
 	s->top=np;
 }
 
 int pop(Stack s)
 {
 	if(empty (s))
 	{
 		return RogueValue;
	 }
	 int hold=s->top->num;
	 Nodeptr temp=s->top;
	 s->top=s->top->next;
	 free(temp);
	 return hold;
 }
 
 main()
 {
 	int n;
 	Stack S = initStack();
 	scanf("%d",&n);
 	while(n!=0)
 	{
 		push(S,n);
 		scanf("%d",&n);
	 }
	 printf("\n");
	 while(!empty(S))
	 {
	 	printf("%d - ",pop(S));
	 }
	 printf("\n\n");
	 system("pause");
 }
