
			/******* Write a code that takes 2 numbers and print their summation, subtraction, anding, oring, and Xoring *******/

#include<stdio.h>

void main (void) {
	/* define two int variables */
	int a,b;
	
	printf ("Please Enter Number a :");
	scanf ("%d",&a); /*Get the value of number a from user*/
	
	printf ("Please Enter Number b :");
	scanf ("%d",&b); /*Get the value of number b from user*/
	
	printf ("\na + b = %d", a+b);	/*summation*/
	printf ("\na - b = %d", a-b);	/*subtraction*/
	printf ("\na & b = %d", a&b); 	/*bitwise AND*/
	printf ("\na | b = %d", a|b); 	/*bitwise OR*/
	printf ("\na ^ b = %d\n", a^b); /*bitwise XOR*/
	
}