/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>


int main()

{ int octalval , decval = 0, i = 1, remainder;
 
    
printf("Enter the octal number: ");
    
scanf("%d", &octalval);
    
while (octalval != 0)
    
{
       
 remainder = octalval % 10;
        
decval = decval + remainder * i;
  
      i = i * 8;
  
      octalval = octalval / 10;
   
 }
 
   printf("Equivalent decimal value: %d", decval);

    
return 0;

}
