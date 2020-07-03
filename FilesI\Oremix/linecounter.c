//C Program to count the number of lines in a file
#include <stdio.h>

const char source [] = "sourcefile.txt";
 
int main()
{
    FILE *sourcefile;
    int counter = 0;  
    char chr; 

	//File opening 
    sourcefile = fopen(source, "r");
	//Opening failure
    if (source == NULL)
    {
        printf("File opening failure %s", source);
        return 0;
    }
	
    // Extract characters from file and store in character chr
    for (chr = getc(sourcefile); chr != EOF; chr = getc(sourcefile))//EOF=End Of File
        if (chr == '\n') // Increment count if this character is newline
            counter = counter + 1;
			
	//file closing
    fclose(sourcefile);

	//Result output
    printf(" The lines in the file %s are : %d \n \n", source, ctr+1);
	
    return 0;
}
//Source:https://www.w3resource.com/c-programming-exercises/file-handling/c-file-handling-exercise-5.php
