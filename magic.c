#include<stdio.h>
int main()
{

 	int userInput;
    printf("Enter the size of magic square you want fron 0 to 99 (only odd numbers): ");
    scanf("%d", &userInput);
    
    int i,j;
    int column,row;
    int newRow,newColumn;
    
    
	int first=userInput/2;
	int last=userInput*userInput;
	int array[last][last];
	row=0; //always start from row 0 -zero
	column=first;   //value one in the top middle
	array[0][first]=1;
	for (i=2;i<userInput+1;i++)
	{
		//condition if row is out of bound
		if(row-1 < 0)
		{
			newRow=userInput-1;			
		}
		else
		{
			newRow=row-1;
		}
		printf("In row: %d\n", row);
		
		//condition if column is out of bound 
		if((column+1) > (userInput-1))
		{
			newColumn=0;
		}
		else
		{
			newColumn=column+1;
		}
		printf("In column: %d\n", column);
		
		//condition if already a value exist at the location (address)
		
		if(array[newRow][newColumn] > 0)
		{
			if(row > (userInput - 1))
			{
				newRow=0;
			}
			else
			{
				newRow=row-1;
				newColumn=column;
			}
			
			row=newRow;
			column=newColumn;
			printf("About to put %d in row %d, column %d\n", i, row, column);
			
			array[row][column]=i;
		}
		//printing the array 
		
	                                                                        
    for (i = 0; i < userInput; i++) {                                                     
        for (j = 0; j < userInput; j++) {                                                 
            printf("%2d", array[i][j]);                                           
        }                                                                         
        printf("\n");                                                             
    }                                                                             
    return 0; 
	}
    
    
	system("pause");
}
