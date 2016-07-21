#include<stdio.h>
#include<stdlib.h>
#define RogueValue -9999
#define MaxStack 10

typedef struct
{
	int top;
	char* ST;
	
}StackType, *Stack;

Stack initStack()
{
	Stack sp = (Stack)malloc(sizeof(StackType));
	sp->top=-1;
	return sp;
}

int empty(Stack s)
{
	return (s -> top == -1);
}
 
 void push(Stack s, int n)
 {
 	if(s -> top == MaxStack - 1)
 	{
 		printf("\n overflow");
		 exit(1);	
	}
	++(s -> top);
	s -> ST[s -> top]=n;
 }
 
 int pop(Stack s)
 {
 	if(empty (s))
 	{
 		return RogueValue;
	}
	 int hold = s->ST[s -> top];
	 printf("%d",hold);
	 --(s -> top);
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
	//printf("%d",sizeof(S));
	system("pause");
 }
