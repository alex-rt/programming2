

## Arrays
An array is a data structure that contains a group of elements. Typically these elements are all of the same data type, such as an integer or string.

### Types of arrays: Single Dimentionals
Single dimensional arrays are also called as one-dimensional arrays, Linear Arrays or simply 1-D Arrays.

**Declaration:** We use the following general syntax for declaring a single dimensional array...

*datatype arrayName [ size ] ;*
```
int rollNumbers [60] ;
```
The above declaration of single dimensional array reserves 60 continuous memory locations of 2 bytes each with the name **rollNumbers** and tells the compiler to allow only integer values into those memory locations.

**Initialization**:We use the following general syntax for declaring and initializing a single dimensional array with size and initial values.

*datatype arrayName [ size ] = {value1, value2, ...} ;*
```
int marks [6] = { 89, 90, 76, 78, 98, 86 } ;
```
The above declaration of single dimensional array reserves 6 contiguous memory locations of 2 bytes each with the name **marks** and initializes with value 89 in first memory location, 90 in second memory location, 76 in third memory location, 78 in fourth memory location, 98 in fifth memory location and 86 in sixth memory location.
### Types of arrays: Multi Dimentionals
An array of arrays is called as multi dimensional array. In simple words, an array created with more than one dimension (size) is called as multi dimensional array. Multi dimensional array can be of two dimensional array or three dimensional array or four dimensional array or more...

**Declaration:** We use the following general syntax for declaring a two dimensional array...

*datatype arrayName [ rowSize ] [ columnSize ] ;*
```
int matrix_A [2][3] ;
```
The above declaration of two dimensional array reserves 6 continuous memory locations of 2 bytes each in the form of 2 rows and 3 columns.

**Initialization**: We use the following general syntax for declaring and initializing a two dimensional array with specific number of rows and coloumns with initial values.

*datatype arrayName [rows][colmns] = {{r1c1value, r1c2value, ...},{r2c1, r2c2,...}...} ;*
```
int matrix_A [2][3] = { {1, 2, 3},{4, 5, 6} } ;
```
The above declaration of two-dimensional array reserves 6 contiguous memory locations of 2 bytes each in the form of 2 rows and 3 columns. And the first row is initialized with values 1, 2 & 3 and second row is initialized with values 4, 5 & 6.
## Files
### Opening 
You can use the  **fopen( )**  function to create a new file or to open an existing file. This call will initialize an object of the type  **FILE**, which contains all the information necessary to control the stream. The prototype of this function call is as follows −

    FILE *fopen( const char * filename, const char * mode );

Here,  **filename**  is a string literal, which you will use to name your file, and access  **mode**  can have one of the following values.
|Mode (text,binary)| Description | 
|--|--|
|"r"  , "rb"  | Opens an existing text file for reading purpose. 
"w" , "wb"|Opens a text file for writing. If it does not exist, then a new file is created. Here your program will start writing content from the beginning of the file.|
|"a" , "ab" | Opens a text file for writing in appending mode. If it does not exist, then a new file is created. Here your program will start appending content in the existing file content.|
|"r+" , "rb+" |   Opens a text file for both reading and writing.|
|"w+" , "wb+"| Opens a text file for both reading and writing. It first truncates the file to zero length if it exists, otherwise creates a file if it does not exist.|
|"a+" , "ab+" | Opens a text file for both reading and writing. It creates the file if it does not exist. The reading will start from the beginning but writing can only be appended.
### Closing 

To close a file, use the fclose( ) function. The prototype of this function is −

int fclose( FILE *fp );

The  **fclose(-)**  function returns zero on success, or  **EOF**  if there is an error in closing the file. This function actually flushes any data still pending in the buffer to the file, closes the file, and releases any memory used for the file. The EOF is a constant defined in the header file  **stdio.h**.

There are various functions provided by C standard library to read and write a file, character by character, or in the form of a fixed length string.

### Writing 

Following is the simplest function to write individual characters to a stream −

    int fputc( int c, FILE *fp );

The function  **fputc()**  writes the character value of the argument c to the output stream referenced by fp. It returns the written character written on success otherwise  **EOF**  if there is an error. You can use the following functions to write a null-terminated string to a stream −

    int fputs( const char *s, FILE *fp );

The function  **fputs()**  writes the string  **s**  to the output stream referenced by fp. It returns a non-negative value on success, otherwise  **EOF**  is returned in case of any error. You can use  **int fprintf(FILE *fp,const char *format, ...)**  function as well to write a string into a file. Try the following example.
