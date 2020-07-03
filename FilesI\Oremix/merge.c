//C program to merge contents of two files to third file.

#include <stdio.h>
#include <stdlib.h>

const char source1 [] = "sourcefile1.txt";
const char source2 [] = "sourcefile2.txt";
const char dest [] = "destinationfile.txt";

int main()
{
    FILE *sourcefile1;
    FILE *sourcefile2;
    FILE *destinationfile;
    char chr;

    sourcefile1 = fopen(source1, "r");//r=reading
    sourcefile2 = fopen(source2, "r");//r=reading
    destinationfile = fopen(dest, "w");//w=writing 

    //fopen() return NULL if unable to open file in given mode. 
    if (sourcefile1 == NULL || sourcefile2 == NULL || destinationfile == NULL)
    {
        //Unable to open file hence exit
        printf("\nFile opening failure.\n");
        printf("Check teh existence of files and read/write privilege.\n");
        exit(EXIT_FAILURE);
    }

	//MERGING
    //copying source 1 to dest
    while ((chr = fgetc(sourcefile1)) != EOF)//EOF=End Of File
        fputc(chr, destinationfile);

    //copying source 2 to dest
    while ((chr = fgetc(sourcefile2)) != EOF)//EOF=End Of File
        fputc(chr, destinationfile);

    printf("\nFiles merged successfully to '%s'.\n", dest);

	//file closing
    fclose(sourcefile1);
    fclose(sourcefile2);
    fclose(destinationfile);

    return 0;
}
//source:https://codeforwin.org/2018/02/c-program-merge-two-files.html
