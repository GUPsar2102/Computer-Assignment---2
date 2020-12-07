/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int n ;
int count =0;
printf("enter an integer : ");
scanf("%d" , &n);
while (n != 0)
{
    n = n/10;
    ++count;
    
}printf("number of digits : %d " , count);

    return 0;
}
