#include <stdio.h>
#include <stdlib.h>

const char sourcefile [] = "sourcefile.txt";
const char destinationfile [] = "destinationfile.txt";

int main()
{
	char chr;
	FILE *source;
	FILE *dest;
	
	source=fopen(sourcefile, "r");//r=reading
	dest=fopen(destinationfile, "w");//w=writing 
	//fopen() return NULL if unable to open file in given mode. 
	if(source==NULL || dest==NULL){
	printf("\nFile opening failure.\n");
        printf("Check teh existence of files and read/write privilege.\n");
        exit(EXIT_FAILURE);//Unable to open file hence exit
	}
	
	while((chr = fgetc(source)) != EOF){//EOF=End Of File
	chr=chr+100;
	fputc(chr, dest);
	}
	//file closing
	fclose(source);
	fclose(dest);
	//file opening with different permissions
	source=fopen(sourcefile, "w");//w=writing 
	dest=fopen(destinationfile, "r");//r=reading
	//fopen() return NULL if unable to open file in given mode. 
	if(source==NULL || dest==NULL){
	printf("\nFile opening failure.\n");
        printf("Check teh existence of files and read/write privilege.\n");
        exit(EXIT_FAILURE);//Unable to open file hence exit
	}

	while((chr = fgetc(dest)) != EOF){//EOF=End Of File
	fputc(chr, source);
	}
  	//Output
	printf(" File %s successfully encrypted\n\n", sourcefile);
	fclose(source);
	fclose(dest);
        return 0; 
}
//Source:https://www.w3resource.com/c-programming-exercises/file-handling/c-file-handling-exercise-13.php
