/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

#include<math.h>

int main()

{
      int decimalval = 0, remainder, hexadecimalval ;
      int i = 0;
      
printf("Enter a Hexadecimal Number:\t");
      
scanf("%d", &hexadecimalval); 
      
while(hexadecimalval != 0)
      
{
            
remainder = hexadecimalval % 10;
       
     decimalval = decimalval + remainder * pow(16 , i);
         
   hexadecimalval = hexadecimalval / 10;
            i++;
 
     } 
 
     printf("Decimal equivalent = %d" , decimalval);
   
   return 0;

      }
