//C program that will enumerate lines of text using dynamic memory
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{  
    int line_n = 0;
    char *line = NULL;
    size_t linelen = 0;
    char *p;

    while (getline(&line, &linelen, stdin) != -1)
    { 
        if (*line == 'q') break;
        printf("%d).%.*s\n", line_n, linelen, line);
        line_n++;
    }

    free(line);
    return 0;
}
//source: stackoverflow
