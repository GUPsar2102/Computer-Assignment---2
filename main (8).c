/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>


int main()

{ int decval , hexdecval = 0, i = 1, remainder;
 
    
printf("Enter the  decimal number: ");
    
scanf("%d", &decval);
    
while (decval != 0)
   
 {
  
      remainder = decval % 10;
    
    hexdecval = hexdecval + remainder * i;
     
   i = i * 10;
   
     decval = decval / 10;
 
   }
   
 printf("Equivalent hexadecimal value: %x", hexdecval);

 
   return 0;

}
