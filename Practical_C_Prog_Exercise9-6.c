//PRACTICAL C PROGRAMMING EXERCISE
//Exercise 9-6: Write a function that scans a character 
//array for the character - and replaces it with _.
#include <stdio.h>

void replace(char char_array[]) {
	int i;          //variable declaration
	for (i = 0; i < sizeof(char_array); ++i) { //foor loop to scan the array, from 0 to the las element
		if (char_array[i] == '-') { //if a '-' gets detected
			char_array[i] = '_'; //replace it with a '_' instead
		}
	}
}

int main(void) { //test program that goes with the function(main)
	int i;          

	char testchar[] = { 'P', 'r', 'a', 'c', 't', 'i', 'c', 'a', 'l', '-', 'C', '-', 'P', 'r', 'o', 'g', '.' };
	replace(testchar); //callibg function to replace characters

	for (i = 0; i < sizeof(testchar); ++i) { //printing the result
		printf("%c\n", testchar[i]);
	}
	
	return(0);
}
