//Exercise 14-2: Write a program to copy a file, expanding all tabs to multiple spaces.
#include <stdio.h>
#include <stdlib.h>

const char sourcefile[]="sourcefile.txt";
const char destinationfile[]="resultfile.txt";

int main(){
FILE *source_file;
FILE *dest_file;
int ch;

source_file=fopen(sourcefile, "r");//r=reading
	if(source_file==NULL){
	printf("Source file opening failure\n");
	}

dest_file=fopen(destinationfile, "w+");//w+=reading and writing 
	if(dest_file==NULL){
	printf("Destination file opening failure\n");
	}

while(1){
ch=fgetc(source_file);//fgetc=get next character
if(ch==EOF){//EOF=End Of File
	break;
	}

if(ch=='\t'){//\t=tab
	fputc(' ', dest_file);//fputc=write character to stream
	fputc(' ', dest_file);
	fputc(' ', dest_file);
}else{
	fputc(ch, dest_file);
	}
}

fclose(source_file);
fclose(dest_file);

return 0;
}
