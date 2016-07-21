#include <stdio.h>
 
int main()
{
   int array[100], search, i;
 
  
 
  int size=(sizeof(array)/sizeof(int));
 
   for (i = 0; i < size; i++)
    array[c]=c;
 
   printf("Enter the number to search\n");
   scanf("%d", &search);
 
   for (i = 0; i < size; i++)
   {
      if (array[i] == search)     
      {
         printf("%d is present at location %d.\n", search, c+1);
         break;
      }
   }
   if (i == size)
      printf("%d is not present in array.\n", search);
 
   return 0;
}
