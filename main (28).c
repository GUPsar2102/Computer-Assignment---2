/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>


int main()

{
    int week;

 
   printf("Enter week number : ");
 
  scanf("%d", &week);



    if(week == 1)
 
   {
   
     printf("Monday");

    }

    else if(week == 2)

    {
        printf("Tuesday");
    }
 
   else if(week == 3)

    {
        printf("Wednesday");
    }

    else if(week == 4)
   
 {
        printf("Thursday");
    }

    else if(week == 5)
    
{
        printf("Friday");
    }

    else if(week == 6)
 
   {
        printf("Saturday");
    }
 
   else if(week == 7)
    
{
        printf("Sunday");
    }
    
else

    {
        printf("Invalid Input.");
    }

 
   return 0;

}
