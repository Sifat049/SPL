#include <stdio.h>

int main() {
  
    int rows; scanf("%d", &rows);
   
    for (int i = 1; i <= rows/2 + 1; i++)
    {
       for (int j = 1; j <= rows; j++)
       {
        if (j == rows/2-i+2 || j == rows/2+1 || j == (2*i - i)+ rows/2 || i == rows/2 +1)
         {
           printf("$");
         }else printf("_");
         
       }
   
      printf("\n"); 
        
   }
   
       for (int i = rows/2; i >= 1; i--)
    {
       for (int j = 1; j <= rows; j++)
       {
     if (j == rows/2-i+2 || j == rows/2+1 || j == (2*i - i)+ rows/2 || i == rows/2 +1)
         {
           printf("$");
         }else printf("_");
          
       }
   
      printf("\n"); 
        
    }
    
       return 0;
   }