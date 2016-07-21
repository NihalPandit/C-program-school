#include <stdio.h>
#include<stdlib.h> 
#include<time.h>
int main()
{
   int i, start, end, middle, find, array[10000];
 
   int size=(sizeof(array)/sizeof(int));

   
 time_t  timev;
 long time1 = time(&timev);
   printf("First Time : %d\n",time1);
 
   for (i = 0; i < size; i++)
      array[i]=i;
 
   printf("Enter value to find\n");
   scanf("%d", &find);
 
   start = 0;
   end = size - 1;
   middle = (start+end)/2;
 
   while (start <= end) {
      if (array[middle] < find)
         start = middle + 1;    
      else if (array[middle] == find) {
         printf("%d found at location %d.\n", find, middle+1);
         break;
      }
      else
         end = middle - 1;
 
      middle = (start + end)/2;
   }
   if (start > end)
      printf("Not found! %d is not present in the list.\n", find);
     
      
    time_t  timev1;
 long time2 = time(&timev1);
 
 long time = (time2-time1);
      
  printf("second time : %d\n",time2);
   printf("difference : %d",time);
   return 0;   
}
