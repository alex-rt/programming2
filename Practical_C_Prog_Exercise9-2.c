//PRACTICAL C PROGRAMMING EXERCISE
//Exercise 9-2: Write a function begins(string1,string2)that returns true if string1 begins string2. 
//Write a program to test the function.

#include <stdio.h>
int begins(char string1[], char string2[]) {
	int i = 0;//index into a string 

	while (1) {
	
		// If we reach the end of the test string without returning
		//false, Theres a match. Return true(1).
		if (string1[i]=='\0'){
			return(1);
		}
		//If theres a mismatch on the strings, return false(0). Otherwise just keep going. 
		if (string1[i]!=string2[i]){
			return(0);
		}
		++i;
	}
}

int main(void){//Testing the function

	if (begins("PracticalC", "PracticalC")) { //strings to test matching
		printf("strings match!\n"); //message to print if they match
	} else {
		printf("strings dont match:c\n"); //output in case they dont match
	}
	return(0);
}
