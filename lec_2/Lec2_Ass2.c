#include<stdio.h>

void main (void){

/*** This Programm is to ask the user to enter his password ***/
	
	// Defining integer varaiables
	int password,x,i;  
	int backup;
	
	int idc,id;
	
	for (idc=1 ; idc<=3 ; ++idc) {
		printf ("\nPlease Enter Your ID: ");
		scanf("%d",&id);
		
		if (id == 1234) {
			printf("Ahmed ID\n");
			break;
		
		}else if(id==5678){
			printf("Amr ID\n");
			break;
			
		}else if(id==9870){
			printf("Wael ID\n");
			break;
			
		}else{
			puts ("Try Again...");
		}
		
	}
	
	
	
	
	
	for (x=1 ; x<=3 ; ++x){  // the loop will be repeated 3 times
		
		
		if (id != 1234) {
			 if (id != 5678){
				 if (id != 9870){
					puts ("YOU ARE NOT REGESTERD!");
					break;
				}
			}
		}
	
		printf ("Please Enter your Password: ");
		scanf ("%d",&password); // asking the use for password
	
		// storing the value of the variable "password" in anoter variable
		backup = password;
		
		// this loop is to count the number of dicimals in the integer value
		for (i=0 ; backup!=0 ; ++i) {
			backup /= 10;
		}
	

		if (i!=4){
		
			if (i<4){
			printf ("Wrong Password! ... smaller number\n\n");
			}else{
				printf ("Wrong Password! ... larger number\n\n");
			}
		
		}else{
				if (id== 1234 && password == 7788) {
					printf("Hi Ahmed\n");
					break;
				}else if (id== 5678 && password == 5566) {
					printf("Hi Amr\n");
					break;
				}else if (id== 9870 && password == 1122) {
					printf("Hi Wael\n");
					break;
				}else{
					printf ("Wrong Password! ... ");
					printf ("Please Try Again\n\n");
				}
		}
	}
	
	
	
	// this function is outside the loop
	if (password != 7788){
		if (password != 5566){
			if (password != 1122){
				puts ("...............................................");
				puts ("Incorrect Password For 3 Times, No More Tries!");
			}
		}	
	}	
	
}