# Conditionals and Loops in C

Conditionals:
In a 'C' program are executed sequentially. This happens when there is no condition around the statements. If you put some condition for a block of statements the flow of execution might change based on the result evaluated by the condition. This process is referred to as decision making in 'C.' The decision-making statements are also called as control statements.
Conditionals statements are possible with the help of these two constructs

## if statement (simple conditional)
 It is one of the powerful conditional statement. If statement is responsible for modifying the flow of execution of a program. If statement is always used with a condition. The condition is evaluated first before executing any statement inside the body of If. The syntax for if statement is as follows:

    
    if(condition)
    instruction;
Instructions can be a single instruction or a code block enclosed by curly braces { }.
if conditional program example:

    #include<stdio.h>
    int main()
    {
    	int num1=1;
    	int num2=2;
    	if(num1<num2)		//test-condition
    	{
    		printf("num1 is smaller than num2");
    	}
    	return 0;
    }

 ## if/else statement (double conditional)
The if-else is statement is an extended version of If, with the addiction that you can add blocks of code for the opposite case for your first condition. The general form of if-else is as follows:

    if (test-expression)
    {
        True block of statements
    }
    Else
    {
        False block of statements
    }
    Statements;

## Nested Else-if statements

Nested else-if is used when multipath decisions are required.

The general syntax of how else-if ladders are constructed in 'C' programming is as follows:

     if (test - expression 1) {
        statement1;
    } else if (test - expression 2) {
        Statement2;
    } else if (test - expression 3) {
        Statement3;
    } else if (test - expression n) {
        Statement n;
    } else {
        default;
    }
    Statement x;
   ## Switch case (multiple conditional)
   Switch case statements are a substitute for long if statements that compare a variable to several "integral" values ("integral" values are simply values that can be expressed as an integer, such as the value of a char). The basic format for using switch case is outlined below. The value of the variable given into switch is compared to the value following each of the cases, and when one value matches the value of the variable, the computer continues executing the program from that point.


    switch ( <variable> ) {
    
    case this-value:
    Code to execute if <variable> == this-value
    break;
    
    case that-value:
    Code to execute if <variable> == that-value
    break;
    ...
    default:
    Code to execute if <variable> does not equal the value following any of the cases
    break;
    }
## The ternary operator
There is another way to express an if-else statement is by introducing the  **?:**  operator. In a conditional expression the  **?:**  operator has only one statement associated with the if and the else.

For example:

    #include <stdio.h>
    int main() {
      int y;
      int x = 2;
       y = (x >= 6) ?  6 : x;/* This is equivalent to:  if (x >= 5)    y = 5;  else    y = x; */
       printf("y =%d ",y);
      return 0;}

# Loops in C
Loops are used to repeat a block of code. Being able to have your program repeatedly execute a block of code is one of the most basic but useful tasks in programming -- many programs or websites that produce extremely complex output (such as a message board) are really only executing a single task many times. (They may be executing a small number of tasks, but in principle, to produce a list of messages only requires repeating the operation of reading in some data and displaying it.) Now, think about what this means: a loop lets you write a very simple statement to produce a significantly greater result simply by repetition.
## For loop 
for loops are the most useful type. The syntax for a for loop is  


    for ( variable initialization; condition; variable update ) {
    
    Code to execute while the condition is true
    
    }
## While loop
while loops are very simple, the basic structure is:

    while(condition)
    {
    code to execute while the condition is true
    }
   ## Do while loop
   Do... while loops are useful for things that want to loop at least once. The structure is


    do {
    
    } while ( condition );

# Break and continue
For this C provides `break` and `continue` statements. By the help of these statements, we can jump out of loop anytime and able continue looping by skipping some part of the code.
## Break 
In any loop `break`  is used to jump out of loop skipping the code below it without caring about the test condition.

It interrupts the flow of the program by breaking the loop and continues the execution of code which is outside the loop.

The common use of break statement is in switch case where it is used to skip remaining part of the code.
example:
in while loop:
```
while (test_condition)
{
  statement1;
  if (condition )
     break;
  statement2;
}
```
in do.. while loop:
```
do
{
  statement1;
  if (condition)
     break;
  statement2;
}while (test_condition);
```
in for loop:
```
for (int-exp; test-exp; update-exp)
{
  statement1;
  if (condition)
     break;
  statement2;
}
```
## Continue
Like a  `break`  statement,  `continue`  statement is also used with  `if` condition inside the loop to alter the flow of control.

When used in  `while` ,  `for`  or  `do...while`  loop, it skips the remaining statements in the body of that loop and performs the next iteration of the loop.

Unlike  `break`  statement,  `continue`  statement when encountered doesn’t terminate the loop, rather interrupts a particular iteration.
Example:
In while loop:
```
while (test_condition)
{
  statement1;
  if (condition )
     continue;
  statement2;
}
```
In do... while loop:
```
do
{
  statement1;
  if (condition)
     continue;
  statement2;
}while (test_condition);
```
In for loop:
```
for (int-exp; test-exp; update-exp)
{
  statement1;
  if (condition)
     continue;
  statement2;
}
```
