//Exercise 13-2: 
//Write a function that takes a single string as its argument and returns a pointer to the first nonwhite character in the string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char *nonwhite(char *string)//function to look for the first nonwhite char
{

	while(*string != '\0'){//this will make the loop go through all string characters
		//if character is nonwhite
		if(! isspace(*string))
			//return pointe rto that nonwhothe character
			return string;
		string++;
	}

	return string;
}

int main()//main function to get string from user, pass it under our non-white fucntion and returning the first char
{
	
	char string[]=" "; //variable declaration
    printf("Enter a string: ");//printing message to user
    scanf("%s", string);//getting the string

	printf("The first none-white char in the string is: '%c'\n", *nonwhite(string));//with *npnwhite(string) we get the pointer to the first nonwhithe char in the string

	return 0;
}
