//C program to count number of characters, words and lines in a text file.
 
#include <stdio.h>
#include <stdlib.h>

const char source [] = "sourcefile.txt";

int main()
{
    FILE *sourcefile;   
    char chr;
    int chars, words, lines;

    //Open source file in reading mode
    sourcefile = fopen(source, "r");

    //Checking file succesful opening
    if (sourcefile == NULL){
        printf("\nSource file opening failure\n");
        printf("Check file existence with reading privilege.\n");

        exit(EXIT_FAILURE);
    }
	
    //Inicializing all counters to 0
    chars = words = lines = 0;
	
	//while loop to look through all the file
    while ((chr = fgetc(sourcefile)) != EOF)//while there is sill file left (EOF=End of File)
    {
        chars++;//add one character to the count
        //if theres a new line
        if (chr == '\n' || chr == '\0')
            lines++;//add one line to the count

        //if theres a new word
        if (chr == ' ' || chr == '\t' || chr == '\n' || chr == '\0')
            words++;//add one word to the count
    }

    //Compensating for last word and line
    if (chars > 0){
        words++;
        lines++;
    }

    //Print file stats
    printf("\nTotal characters = %d\n", chars);
    printf("Total words      = %d\n", words);
    printf("Total lines      = %d\n", lines);

    //file closing
    fclose(sourcefile);
    return 0;
}
//source: https://codeforwin.org/2018/02/c-program-count-characters-words-lines-in-file.html
