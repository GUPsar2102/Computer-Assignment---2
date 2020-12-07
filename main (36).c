/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>


int main()

{ 
    float Basic, Gross , DA , HRA ;
    
printf("Enter basic salary of an employee: ");
    
scanf("%f", &Basic);

    
if(Basic <= 10000)
    
{
        DA  = Basic * 0.8;
        HRA = Basic * 0.2;
    }
    
else if(Basic <= 20000)
    
{
        DA  = Basic * 0.9;
        HRA = Basic * 0.25;
    }
    
else
    
{
       DA  = Basic * 0.95;
        HRA = Basic * 0.3;
    }

    
Gross = Basic + HRA + DA;

    
printf("GROSS SALARY OF EMPLOYEE = %.2f", Gross);

    
return 0;

}
