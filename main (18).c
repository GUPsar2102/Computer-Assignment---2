/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main()

{
   
        printf("\n");
  
}

  
   return 0 ;
 int  row , spaces , rows ;


 
 printf("Enter number of rows: ");
  
  scanf("%d", &rows);

  

    for(row =1;  row <=rows;  row++)
   
 {
        for(spaces=1; spaces<row; spaces++)


        {
   
         printf(" ");

        }

 
   
    for(spaces=1; spaces<=(rows*2 - (2*row-1)); spaces++)
     
   
{

            if(row==1 || spaces==1 || spaces==(rows*2 - (2*row - 1)))
   
         
{
                printf("*");
            }

            else

            
{


                printf(" ");
            }
  

      }

}

