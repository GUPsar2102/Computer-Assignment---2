/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>


int main()

{int i  ;

printf("enter a number : ");

scanf("%d" , &i);
 
if( ( i%5 == 0 ) && ( i%11 == 0 ) )

     {
printf("number is divisible by 5 or 11");
}

else

{
printf("number is not divisible by 5 or 11");
}


    return 0;

}
