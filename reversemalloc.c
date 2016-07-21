#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int nodedata;
	struct node *nextNode;
	
}Node, *NodePtr;

main()
{
	void printList(NodePtr);
	NodePtr makeNode (int);
	int n;
	NodePtr top, np;
	top=NULL;
	
	if(scanf("%d",&n) !=1)
	{
		n=0;
	}
	
	while(n!=0)
	{
		np=makeNode(n);
		np->nextNode = top;
		top=np;
		if(scanf("%d",&n) !=1)
		{
		n=0;	
		}
	}
	printList(top);
}

NodePtr makeNode(int n)
{
	NodePtr np=(NodePtr)malloc(sizeof(Node));
	np -> nodedata = n;
	np -> nextNode = NULL;
	return np;
}

void printList(NodePtr np)
{
	printf("\n");
	while(np!=NULL)
	{
		printf("%d\ - ",np -> nodedata);
		np=np->nextNode;
	}
	printf("#\n");
	system("pause");
}
