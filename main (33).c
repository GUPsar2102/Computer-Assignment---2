/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>


int main()

{ int side1, side2, side3;
  
  printf("Enter three sides of triangle: ");
   
 scanf("%d%d%d", &side1, &side2, &side3);

 
   if(side1==side2 && side2==side3) 

    {
   
    
        printf("Equilateral triangle.");
    
}
   
 else if(side1==side2 || side1==side3 || side2==side3) 
  
  {
      

        printf("Isosceles triangle.");
 
   }
   
 else 

    {

       
        printf("Scalene triangle.");

    }


    return 0;

}
