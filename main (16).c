/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h> 


int main()

{int x = 0,y = 0;
    unsigned int rows = 0;
 
   printf("Enter the number of rows = ");
  
  scanf("%u",&rows);
 
   for(x=1; x<=rows; ++x)
   
 {
        
   
     for(y=x; y<=rows; ++y)
    
    {
   
         printf(" ");
        }
    
    for(y =1; y<=((2*x)-1); ++y)
  
      {
        
   
         if(x==rows || y==1 || y==((2*x)-1))
     
       {
           
     printf("*");
            }

            else
 
           {
                printf(" ");
            }
   
     }
      
 
        printf("\n");
    }
  
  return 0;
}
