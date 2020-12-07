/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main()

{  int rows, cols, i, j;

    /* Input rows and columns from user */
  
  printf("Enter number of rows: ");
   
 scanf("%d", &rows);

    printf("Enter number of columns: ");
 
   scanf("%d", &cols);

    /* Iterate through rows */
   
 for(i=1; i<=rows; i++)
   
 {
        /* Iterate through columns */
      
  for(j=1; j<=cols; j++)
    
    {
    
        printf("1");
  
      }

    
    printf("\n");
    
}
 
   


    return 0;
}
