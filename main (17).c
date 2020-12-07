/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>


int main()

{int row , spaces , symbol , totalrownum ;

printf("enter number of rows : ");

scanf("%d", &totalrownum);

for( row = 1  ; row<=totalrownum ; row++)

{
    for(spaces = 1 ; spaces<=row ; spaces ++)

    printf(" ");
   
 for( symbol = 1 ; symbol <= (( 2*totalrownum) -( ( 2* row) - 1 )) ; symbol++)

    printf("*");
    

    printf("\n");

}
     
return 0 ;

}