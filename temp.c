#include <stdio.h>
int main()
{
	int i,j;
	int num=1;
for(i=1;i<=21;i++){
	num=i;
	for(j=1;j<=i;j++)
	{
			if(num<10)
			{
				printf("  %d ",num);
			}
			else
			{
				printf(" %d ",num);
			}
		num++;
	}
	printf("\n");

}

  	
  	
    
  system("PAUSE");
}

