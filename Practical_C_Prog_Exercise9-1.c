//PRACTICAL C PROGRAMMING EXERCISE
//Exercise 9-1: Write a procedure that counts the number of words in a string. 
//(Your documentation should describe exactly how you define a word.) 
//Write a program to test your new procedure.
#include <stdio.h>

int count_words(char instring[]) { //the function only calls for an input string, count_words function will Count the words in a phrase. Returns integer, number of words in the phrase.
	static int strindex    = 0;// index into the string 
	static int wordcount = 0;// count of seen words 

	while (instring[strindex] != '\0') {
//word definition: any chunk of chars separated by a space, whatever is between spaces.
		if((instring[strindex]==' ')||(instring[strindex]=='\n')){ //if a space or tab gets found, it will count a word
			++wordcount;//add that word to the word count
		}

		++strindex;
		count_words(instring);
	}

	return wordcount; //the program just returns the total word count
}

int main(void) { //Program to test procedure
	int result;//variable declaration, int to hold the word count
	char instring[100];//line of keyboard input 

	printf("Input a string: "); //print message to get input
	fgets(instring, sizeof(instring), stdin); //Get input string

	result = count_words(instring); //get the numebr of words
	printf("Found a total of %d words\n", result); //print to user the number

	return(0);
}
