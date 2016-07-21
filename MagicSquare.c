//The MAGIC SQUARE program or 3 by 3
#include <stdio.h>

int main() {

    int array[99][99];
    int first = (3 / 2); 
    int last = 3 * 3; 
    array[0][first] = 1; 

    
    int row;
    int col;
    int newRow;
    int newCol;
    int i,j;
    	row = 0, col = first;
    //iteration for the array
    for (i = 2; i < last + 1; i++) 
	{
	
		//condition if the row gets out of bound
        if ((row - 1) < 0) 
		{ 
        
		newRow = 2; 
        
		}
        else 
		{ 
		
		newRow = row - 1; 
		
		} 
		//condition if the column gets out of bound
       
        if ((col + 1) > (2)) 
		{ 
        
		newCol = 0;
                                             
        }                                                                         
        else 
		{
			
		newCol = col + 1;
		
		}                   
        
        //condition if array is out of bound from row and column
        if (array[newRow][newCol] > 0)
		 {       
            if (row > (2))
		 { 
                newRow = 0;                           
        }                                                                     
        else
		{                                                                
                newRow = row + 1;                     
                newCol = col;                    
    	}
		                                                                     
        }                                                                         
        row = newRow;                                                           
        col = newCol;                                                           
           
        array[row][col] = i;             
    }                                                                             

                                               
     //print the array(magic square)                                                                    
    for (i = 0; i < 3; i++)
	{                                                     
        
	for (j = 0; j < 3; j++) 
	{                                                 
            
	printf("%2d", array[i][j]);                                           
    
	    }                                                                         
    
	    printf("\n");                                                             
    }                                                                             
    return 0;                                                                     
}
