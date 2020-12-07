/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>


int main()

{ 
    int unit;
    float amt, totalamt, surcharge;
    
printf("Enter total units consumed: ");
    
scanf("%d", &unit);


    
if(unit <= 50)
    
{
        amt = unit * 0.50;
    }
    
else if(unit <= 150)
    
{
        amt = 25 + ((unit-50) * 0.75);
    }
    
else if(unit <= 250)
    
{
        amt = 100 + ((unit-150) * 1.20);
    }
    
else
    
{
        amt = 220 + ((unit-250) * 1.50);
    }
    
    
surcharge = amt * 0.20;
    
totalamt  = amt + surcharge;

    
printf("Electricity Bill = Rs. %.2f", totalamt);


    
return 0;

}
