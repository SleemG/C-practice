/*
Write a C program that ask the user to enter two numbers
and print their summation, this program should never ends
until the user close the window
*/
#include <stdio.h>

void main (void){
	
	int result,n1,n2;
	printf("\nThis program is to print the sum of two numbers");
	printf("\n==================================================\n");
	while(1){
		
		printf ("\nEnter the two numbers\n");
		
		scanf("\n%d ",&n2);
				
		scanf(" %d",&n1);
		
		result = n1 + n2;
		
		printf("%d + %d = %d\n",n2,n1,result);
		
		n1=n2=0;
	
	}

}