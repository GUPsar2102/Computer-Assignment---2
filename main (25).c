/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>


int main()

{ 
   
 int rows, cols, i, j, k;

	
        printf("Enter number of rows :");

	scanf("%d", &rows);
	
        printf("Enter number of columns:");
	scanf("%d", &cols);

	k = 1;

	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= cols; j++)
		
{
			
if (k == 1)
			
{
			
	printf("1");
			
}
		
	else
	
		{
			
	printf("0");
	
		}

		
	k *= -1;
	
	}

	
	if (cols % 2 == 0)
	
	{
		
	k *= -1;
	
	}

	
	printf("\n");

	}
    
   
 


    return 0;

}
