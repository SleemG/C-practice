/*
Write a c program that draw a pyramid of stars
with a height entered by the user
*/
#include<stdio.h>

void main (void){
	
	int height,x,y,i,;
	
	printf("Please Enter the Height of the pyramid: ");
	scanf("%d",&height);
	
	for (i=1 ; i<=height ; ++i){
		for(x=1 ; x<= height-i ; ++x)	printf(" ");
		for(y=1; y<=2*i-1 ;++y)			printf("*");	
		printf("\n");
	}
}