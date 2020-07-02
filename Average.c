#include <stdio.h>
#include <stdlib.h>
const char averagein [] = "averageinput.txt";
const char averageout [] = "averageoutput.txt";

int main()
{
FILE *averageinput;  
FILE *averageoutput;

char line [100];
float numbers;
float average;
int chr;
float sum;//addition of all values
int n; //number values in document (# of lines)
//opening files
averageinput = fopen(averagein, "r");//r=reading
	if(averageinput == NULL)
	{
	printf("input file opening failure\n");
	exit(8);
	}

averageoutput = fopen(averageout, "w+");//w+=reading and writing 
	if(averageoutput == NULL)
	{
	printf("output file opening failure\n");
	exit(8);
	}

while(fgets(line, sizeof(line), averageinput))//getting all the values
{
	sscanf(line, "%f", &numbers);
	sum= sum+numbers;//addition of all o fthem
}
chr = getc(averageinput);
    while (chr != EOF)//EOF=End Of File
    {
        if (chr == '\n'){//looking for file jump
            n = n + 1;}
    }
	n = n + 1;

average=sum/n;//GETTING THE ACTUAL AVERAGE
fprintf(averageoutput, "prom is %f\n", average);//writing result on output file
//closing files
fclose(averageinput);
fclose(averageoutput);

return 0;
}
