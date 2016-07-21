#include <stdio.h>

int main() {
    int size;
    printf("Enter a size (must be an odd number) :");
    scanf("%d", &size);
    
    
    int sPoint = (size / 2);
    int lastNumber = size * size;
    int square[lastNumber][lastNumber];
   	int row, col, newRow, newCol, i, j;

    row = 0;
    col = sPoint;
    
    square[row][col] = 1;
    printf("\nNew Row: %d, Col: %d\n",row,col);
    
    for(i= 2;i<lastNumber+1;i++){
    	
	    if ((row - 1) < 0) {
            newRow = size - 1;
        }
        else {
		 newRow = row - 1; 
		}

        if ((col + 1) > (size - 1)) { 
            newCol = 0;                                   
        }                                                                         
        else { 
		newCol = col + 1; 
		}                                              

        if (square[newRow][newCol] > 0) {       
            if (row > (size - 1)) {
                newRow = 0;                                
            }                                                                     
        else {                                                                
                newRow = row + 1;                      
                newCol = col;                    
            }                                                                     
        }   
		row = newRow;
		col = newCol;
		square[row][col] = i;
	
	}
	for (i = 0; i < size; i++) {                                                     
        for (j = 0; j < size; j++) {                                                 
            printf("%2d", square[i][j]);                                           
        }                                                                         
        printf("\n");                                                             
    }     
	                                                                    
}









//	printf("\nNew Row: %d, Col: %d \n",row,col);
