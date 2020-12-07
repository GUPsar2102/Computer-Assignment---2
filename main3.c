/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    long num;

    int digit,rem,count=0;

    printf("Enter the Number: ");

    scanf("%ld",&num);

    printf("Enter the digit to be counted:");

    scanf("%d",&digit);

    while(num!=0)
    {

       rem=num%10;

       if(rem==digit)
        
       count++;
       
       num=num/10;
    }

printf("The digit %d present %d times ",digit,count);

    return 0;
}
