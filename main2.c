/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
int main()
{
    int n,firstDigit, lastDigit,digits, swappedNum;
    printf("Enter number = ");
    scanf("%d", &n);
    lastDigit = n % 10;
  digits = (int)log10(n);
    
    firstDigit = (int) (n / pow(10, digits));
    swappedNum  = lastDigit;
    swappedNum *= (int) (pow(10, digits));
    swappedNum += n % ((int) (pow(10, digits)));
    swappedNum -= lastDigit;
    swappedNum += firstDigit;
    printf("Number after swapping first and last digit: %d", swappedNum);
    return 0;
}
