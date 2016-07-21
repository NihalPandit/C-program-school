#include<stdio.h>
#include<stdlib.h>

typedef struct 
{
	int score;
	int lives;
	char lessGreaterMessage[50];
	char winFailMessage[50];
	struct StepReport *nextNode;
	
}StepReport,*NodePtr;

int main()
{
	char lessGreaterMessage[50];
	char winFailMessage[50];
 	srand (time(NULL));
 	int random_number = (rand() % 100)+1;
 	
 	StepReport top[10];
	StepReport *top;
 	strcpy(top[0].score, 100);
	strcpy(top[0].lives,10);
	strcpy(top[0].lessGreaterMessage,"Please start the game");
	strcpy(top[0].winFailMessage,"Good Luck!");
	
	
 do
 {
  struct StepReport *new_node,*current;
	 	
  

  printf("nEnter your guess : ");
  scanf("%d",&new_node->data);
  new_node->next=NULL;

  if(start==NULL)
  {
  start=new_node;
  current=new_node;
  }
  else
  {
  current->next=new_node;
  current=new_node;
  }

 printf("nDo you want to creat another : ");
 ch=getche();
 }while(lives != 0);
	
	
	
	
//	StepReport *top;	
//	countNumberOfNodes(top);
//	printf("%d",countNumberOfNodes(top));
//	char lessGreaterMessage[50];
//	char winFailMessage[50];
//
//	StepReport top[10];
//	
//	strcpy(top[0].score, 100);
//	strcpy(top[0].lives,10);
//	printf("hello");
//	strcpy(top[0].lessGreaterMessage,"Please start the game");
//	strcpy(top[0].winFailMessage,"Good Luck!");

	
//	printf("%s",&top[0].lessGreaterMessage);
	system("pause");
}



//return the number of node int the list

int countNumberOfNodes(NodePtr top)
{int n=0;
	NodePtr curr=top;
	while (curr != NULL)
	{
	n++;
	curr=curr -> nextNode;	
	}
	return n;
}

//search the list to get the value

//Nodeptr serach(NodePtr top; int val)
//{
//	while (top != NULL && val != top -> nodeData)
//	{
//		top=top->next;
//	}
//	return top;
//}


//get the last node from the list
//Nodeptr getLast(NodePtr top)
//{
//if(top == NULL)
//{
//	return NULL;
//}	
//while()
//{
//	top = top -> next;
//}
//return top;
//}	
