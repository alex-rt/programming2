#include <stdio.h>
#include <stdlib.h>

const char sourcefile [] = "sourcefile.txt";
const char destinationfile [] = "destinationfile.txt";

int main()
{
	char chr;
	FILE *source;
	FILE *dest;

	source=fopen(sourcefile, "r");
	dest=fopen(destinationfile, "w");
	
	if(source==NULL || dest==NULL){
	printf("\nFile opening failure.\n");
        printf("Check teh existence of files and read/write privilege.\n");
        exit(EXIT_FAILURE);
	}
	
	while((chr = fgetc(source)) != EOF){
	chr=chr+100;
	fputc(chr, dest);
	}

	fclose(source);
	fclose(dest);

	source=fopen(sourcefile, "w");
	dest=fopen(destinationfile, "r");
	
	if(source==NULL || dest==NULL){
	printf("\nFile opening failure.\n");
        printf("Check teh existence of files and read/write privilege.\n");
        exit(EXIT_FAILURE);
	}

	while((chr = fgetc(dest)) != EOF){
	fputc(chr, source);
	}
  
	printf(" File %s successfully encrypted\n\n", sourcefile);
	fclose(source);
	fclose(dest);
        return 0; 
}
//Source:https://www.w3resource.com/c-programming-exercises/file-handling/c-file-handling-exercise-13.php
