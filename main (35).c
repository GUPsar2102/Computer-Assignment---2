/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>


int main()

{
   
    int phy, chem, bio, math, comp; 
    
float per; 
    
printf("Enter five subjects marks: ");
    
scanf("%d%d%d%d%d", &phy, &chem, &bio, &math, &comp);

    
per = (phy + chem + bio + math + comp) / 5.0;

    
printf("Percentage = %.2f\n", per);

    
if(per >= 90)
    
{
        printf("Grade A");
    }
    
else if(per >= 80)
    
{
        printf("Grade B");
    }
    
else if(per >= 70)
    
{
        printf("Grade C");
    }
    
else if(per >= 60)
    
{
        printf("Grade D");
    }
    
else if(per >= 40)
    
{        printf("Grade E");
    }
    
else
    
{
        printf("Grade F");
    }

  
  

    
return 0;

}
