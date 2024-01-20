/*
Write a login program in C that ask the user to enter his ID
and his password, if the ID is correct the system will ask
the user to enter his password up to 3 times, if he enters
the password right the systems welcomes him, if the three
times are incorrect, the system print No more tries.
If the user ID is incorrect the system print
You are not registered

User	ID		Password
=========================
Ahmed	1234	7788
Amr		5678	5566
Wael	9870	1122
 */
#include<stdio.h>

void main (void){	
	// Defining integer varaiables
	int password, x, i, backup, idc, id, flag = 0;  
	
	for (idc=1 ; idc<=3 ; ++idc) {
		printf ("\nPlease Enter Your ID: ");
		scanf("%d",&id); 
		
		if (id == 1234) {
			printf("Correct\n");
			break;
		
		}else if(id==5678){
			printf("Correct\n");
			break;
			
		}else if(id==9870){
			printf("Correct\n");
			break;
			
		}else{
			if (idc == 3) break;
			else puts ("Try Again...");
		}
	}
		
	for (x=1 ; x<=3 ; ++x){  // Three trails loop for the password
		if (id != 1234 && id != 9870 && id != 5678) {
			puts ("YOU ARE NOT REGESTERD!");
			break;			// break the loop to end the program as the id is not correct
		}			
	
		printf ("Please Enter your Password: ");
		scanf ("%d",&password); // asking the use for password
	
		// storing the value of the variable "password" in anoter variable
		backup = password;
		
		// this loop is to count the number of digits in the integer value
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
				printf("Hello Ahmed\n");
				break;
			}else if (id== 5678 && password == 5566) {
				printf("Hello Amr\n");
				break;
			}else if (id== 9870 && password == 1122) {
				printf("Hello Wael\n");
				break;
			}else{
				flag = 1;
				printf ("Wrong Password! ... ");
				printf ("Please Try Again\n\n");
			}
		}
	}
	
	// if the password isn't correct, show this message
	if (flag == 1){
		puts ("...............................................");
		puts ("Incorrect Password For 3 Times, No More Tries!");
	}	
	
}