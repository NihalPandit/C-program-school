//quiz lab 2
#include <stdio.h>
main(){
	
	float val, a, b ;
	for(a = 1.00; a <= 1000.00; a++){	
		for(b = a; b <= 1000.00; b++){
			val = (((a*a) + (b*b) + 1) / (a*b));
			if((int)val == val){
				printf("Pairs of integers are (%d , %d), \n" , (int)a , (int)b);
			}	
		}
	}
    system("PAUSE");
}
