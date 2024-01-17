/*** 
Write a C code that ask the user to enter 10 numbers,
then ask him to enter another number to search on it
in the 10 numbers and print its location in case it
is found. In case the number is not found, it will
print number no exist.
***/

#include <stdio.h>

void main (void){

	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,value;
	
	
	printf ("Enter Number 1 : ");
	scanf ("%d",&n1);
	
	printf ("\nEnter Number 2 : ");
	scanf ("%d",&n2);
	
	printf ("\nEnter Number 3 : ");
	scanf ("%d",&n3);
	
	printf ("\nEnter Number 4 : ");
	scanf ("%d",&n4);
	
	printf ("\nEnter Number 5 : ");
	scanf ("%d",&n5);
	
	printf ("\nEnter Number 6 : ");
	scanf ("%d",&n6);
	
	printf ("\nEnter Number 7 : ");
	scanf ("%d",&n7);
	
	printf ("\nEnter Number 8 : ");
	scanf ("%d",&n8);
	
	printf ("\nEnter Number 9 : ");
	scanf ("%d",&n9);
	
	printf ("\nEnter Number 10 : ");
	scanf ("%d",&n10);
	
	
	printf("\n\nEnter The value to search : ");
	scanf ("%d",&value);
	

	if (value == n1){
		printf("\nThe Value Is Exist At Element Number 1");
	}else if(value == n2){
		printf("\nThe Value Is Exist At Element Number 2");
	}else if(value == n3){
		printf("\nThe Value Is Exist At Element Number 3");
	}else if(value == n4){
		printf("\nThe Value Is Exist At Element Number 4");
	}else if(value == n5){
		printf("\nThe Value Is Exist At Element Number 5");
	}else if(value == n6){
		printf("\nThe Value Is Exist At Element Number 6");
	}else if(value == n7){
		printf("\nThe Value Is Exist At Element Number 7");
	}else if(value == n8){
		printf("\nThe Value Is Exist At Element Number 8");
	}else if(value == n9){
		printf("\nThe Value Is Exist At Element Number 9");
	}else if(value == n10){
		printf("\nThe Value Is Exist At Element Number 10");
	}else{
		printf("\nThe Value Is Not Exist!");
	}
	
}	