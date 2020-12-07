/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>


int main() 

{
    int i, j, rows , stars , spaces ;

   
  printf("Enter rows to print : ");
    
     scanf("%d", &rows);
    
    
   
     stars = 1;
   
     spaces = rows - 1;
   
 
    for(i=1; i<rows*2; i++)

     {
        
        
                   for(j=1; j<=spaces; j++)
 
                   printf(" ");

        
                   for(j=1; j<stars*2; j++)
        
                   printf("*");
        
        
        
                   printf("\n");
        
        
                   if(i<rows)
     
     
                   {
           
                              spaces--;
       
                              stars++;
  
                   } 
    
     else
   
      {
      
                              spaces++;
   
                              stars--;
   
     }

    }

    
    return 0;
}

