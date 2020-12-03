/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>


int main()

{ int binaryval , hexadecimalval = 0, i = 1, remainder;
 
  
  printf("Enter the binary number: ");
   
 scanf("%ld", &binaryval);
    
while (binaryval != 0)
 
   {
    
    remainder = binaryval % 10;
      
  hexadecimalval = hexadecimalval + remainder * i;
  
      i = i * 2;
      
  binaryval = binaryval / 10;
  
  }
   
 printf("Equivalent hexadecimal value: %lX", hexadecimalval);

 
   return 0;

}
