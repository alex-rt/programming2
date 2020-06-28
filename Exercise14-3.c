//Exercise 14-3: Write a program that reads a file containing a list of numbers, and then writes two files, one with all numbers divisible by three and another containing all the other numbers.
#include <stdio.h>
#include <stdlib.h>

const char sourcefile[]="sourcefile.txt";
const char dibisiblenums[]="dibisiblebythree.txt";
const char othernums[]="othernumbers.txt";

int main(){
FILE *numbersfile;			
FILE *dibisiblenumbers;
FILE *othernumbers;
char num;  

numbersfile=fopen(sourcefile, "r");//r=reading
	if(numbersfile==NULL){
	printf("sourcefile file opening failure\n");
	}

dibisiblenumbers=fopen(dibisiblenums, "w+");//w+=reading and writing 
	if(dibisiblenumbers==NULL){
	printf("dibisiblenums file opening failure\n");
	}

othernumbers=fopen(othernums, "w+");	
	if(othernumbers==NULL){
	printf("othernums file opening failure\n"); 
	}


while(1){
number=fgetc(numbersfile);//fgetc=get next character
if(number==EOF){//EOF=End Of File
	break;
	}

if(number%3==0){
	fputc((int)number, dibisiblenumbers);//fputc=write character to stream
}else{
	fputc((int)number, othernumbers);
	}

}			

fclose(numbersfile);
fclose(dibisiblenumbers);
fclose(othernumbers);

return 0;
}
