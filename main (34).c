/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>


int main()

{
  int cp,sp, amt; 
  
  printf("Enter cost price: ");
  
  scanf("%d", &cp);
  
  printf("Enter selling price: ");
  
  scanf("%d", &sp);
   
 
    if(sp > cp)
 
   {
     
   amt = sp - cp;
   
     printf("Profit = %d", amt);
 
   }
   
 else if(cp > sp)
 
   {
   
     amt = cp - sp;
  
      printf("Loss = %d", amt);
 
   }
 
   else
  
  {
   
     printf("No Profit No Loss.");
 
 }

  
  return 0;

}
