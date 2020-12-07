/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>


int main()

{ int angle1 , angle2 , angle3 , sum ;

 printf(" Angles of a triangle are :");
 
scanf(" %d , %d , %d " , &angle1 , &angle2 , &angle3);

sum = (angle1+angle2+angle3);
 
  if(sum == 180 )
   
{ printf(" The triangle is valid"); }
 
  else
  
 {printf("The triangle is not valid") ; }
 
  

    return 0;

}
