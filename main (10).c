/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int main()
{  
int a[10],n,i; 
   
 
printf("Enter the number to convert: ");  
  
scanf("%d",&n); 
   
for(i=0;n>0;i++)    

{   
 
a[i]=n%2; 
   
n=n/2;    

}   
 
printf("\nBinary of Given Number is=");   
 
for(i=i-1;i>=0;i--)   
 
{   
 
printf("%d",a[i]);  
  
} 
   
return 0;  

}  