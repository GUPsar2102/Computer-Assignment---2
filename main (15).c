/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>


int main()

{int row, c, n;

  
printf("Enter the number of rows  to be printed : ");
  
scanf("%d", &n);

  
for (row = 1; row <= n; row++)  
  
{
    
for (c = 1; c <= n-row; c++)  
      
printf(" ");

    
for (c = 1; c <= 2*row - 1; c++)
     
 printf("*");

    
printf("\n");
  
}

 
   return 0;

}
