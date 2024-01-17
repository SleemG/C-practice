	
			/******* Write a code that scan 3 numbers from the user and print them in reversed order *******/

#include<stdio.h>

void main (void) {
	
	/* define three float variables x,y,z */
	float x,y,z; 
	
	printf ("Please Enter number 1 :");
	scanf ("%f",&x); /*get the value of x from the user*/
	
	printf ("Please Enter number 2 :");
	scanf ("%f",&y); /*get the value of y from the user*/
	
	printf ("Please Enter number 3 :");
	scanf ("%f",&z); /*get the value of z from the user*/
	
	
	/*printing numbers in reversed order*/
	printf ("\nNumber 3 is : %f",z);
	printf ("\nNumber 2 is : %f",y);
	printf ("\nNumber 1 is : %f",x);
	

}