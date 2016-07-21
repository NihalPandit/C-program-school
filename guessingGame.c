#include<stdio.h>
#include<stdlib.h>


int main()
{

	int score=100;
	int lives=10;
	char lessGreaterMessage[50]="Please start the game";
	char winFailMessage[50]="Good Luck!";
	srand (time(NULL));
	int random_number = (rand() % 100)+1;
	int guessNum;
	printf("\n%d\n",random_number);
	
	printf("Guess my number! "); 
	do 
	{
		lives--; 

        scanf("%d", &guessNum);

        if (guessNum == random_number) 
        {
            printf("Your guess is correct and you guess in %d tries!\n", (10-lives)); 
            winFailMessage[50]="";
        	winFailMessage[50]="Congratulation!";
			printf("%s . Play again\n",&winFailMessage);
            break;
        }

       else if (guessNum < random_number) 
           {
           	printf("Your guess is low.");
            score=score-10;
		   }
		else  (guessNum > random_number) 
        {
        	 printf("Your guess is high.");
            score=score-10;
		}
           
          
		printf("You have %d life left!\n", lives);  
		
	}while(lives != 0);
	
	if(lives == 0)
	{
	winFailMessage[50]="Sorry Game Over!";
	printf("%s",winFailMessage,"Please try again");	
	
	}
	
	
	 
	system("pause");
}




