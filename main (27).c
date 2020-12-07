/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>


int main()


{
char  i ; 

printf("enter a character : ");

scanf(" %c " , &i);

 if( ( i >= 'A') && ( i <= 'Z'  ) )
 
    {
printf("%c is uppercase " , i);
}

else if( ( i >= 'a'  ) && ( i <= 'z' ) )

{
printf("%c is lowercase" , i);
}

else

{
printf("%c is not a Character " , i );
}

   
 return 0;

}
