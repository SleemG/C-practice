#include <stdio.h>

void main (void){

	int n1,n2,n3;
	
	printf("Please Enter The Three Numbers");
	printf("\nNumber1 = ");
	scanf("%d",&n1);
	printf("\nNumber2 = ");
	scanf("%d",&n2);
	printf("\nNumber3 = ");
	scanf("%d",&n3);
	
	if ((n1>n2)&&(n1>n3)){
		printf("The Max. Number Is Number1 = %d",n1);
	}else if((n2>n1)&&(n2>n3)){
		printf("The Max. Number Is Number2 = %d",n2);
	}else{
		printf("The Max. Number Is Number3 = %d",n3);
	}
	
	

}