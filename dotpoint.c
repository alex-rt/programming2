#include <stdio.h>
#include <stdlib.h>

const char multin [] = "multinput.txt";
const char multout[] = "multoutput.txt";

int main() 
{
FILE *multinput;//files pointers
FILE *multoutput;

char line [100];//variabe¿le declaration
int firstnum;
int scndnum;
int multresult;
//file opening
multinput = fopen(multin, "r");//r=reading
	if(multinput == NULL){
	printf("input file opening failure\n");
	exit(8);
	}

multoutput = fopen(multout, "w+");//w+=reading and writing 
	if(multoutput == NULL){
	printf("output file opening failure\n");
	exit(8);
	}

while(!feof(multinput))//do the following until reaching end of file
{
fscanf(multinput, "%d%d", &firstnum, &scndnum);//get the nums
multresult = firstnum*scndnum;//multiply them
fprintf(multoutput, "%d\n", multresult);//write them on output file
}
//closing files
fclose(multinput);
fclose(multoutput);

return 0;
}
