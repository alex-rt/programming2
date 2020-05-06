## Programming. 1st Chapter Concepts

[Alejandro Rodriguez](https://github.com/alex-rt)

**Introduction to structured programming**
>  - **Programing Paradigm**
>   The ability to transalte a real-world problem into a simple and elegant solution deployed in a code representation. The main approach is to reduce complexity in a program or make it more manageable.

**Classifications of Programming paradigms**
 - **Declarative:** Control flow in declarative programming is _implicit_: the programmer states only _what_ the result should look like, **not** how to obtain it. Example:
 

        select upper(name)  
        from people
        where length(name)  >  5  
        order  by name
	 
 - Functional
	 - In this type of programming, control flow is expressed by using function calls(avoifing any global state), rather than by assigning values to variables. Its use is for the execution of series of mathematical functions
 - Dataflow
	 - It models a program as a directed graph of the data flowing between operations, thereby implementing the principles and architecture of the data flow.
 - Logic
	 - We can say that this type of programming is enterely ruled-based. By specifying a set of facts and rules. An engine infers the answers to questions.
 - Constraint-based
	 - It works by specifying a set of constraints. An engine finds the values that meet the constraints.
 - Template-based
	 - Its a  technique in which templates are used by a compiler to generate temporary source code, merged by the compiler with the rest of the source code and then compiled. 
 - Structured
	 - its a paradigm aimed at improving the clarity, quality, and development time of a computer program by making extensive use of the structured control flow constructs of selection (if / then / else) and repetition (while and for), block structures, and subroutines.
 - **Imperative:** In this type of programming, the control flow is _explicit_: commands show _how_ the computation takes place, step by step. Each step affects the global **state** of the computation. Example:
`result = []  
i = 0  
start:
  numPeople = length(people)  
  if i >= numPeople goto finished  
  p = people[i]  
  nameLength = length(p.name)  
  if nameLength <= 5 goto nextOne  
  upperName = toUpper(p.name)  
  addToList(result, upperName)  
nextOne:
  i = i + 1  }
  goto start  
finished:
  return sort(result)`


 - Von Neuman
	 - Its based on Von Neumann´s computer arcquitecture, Von Neumann languages statements requests to the CPU to make some change to the store, and expressions (conceptually simpler) to denote values that need to be calculated by the CPU
 - Interpreted(scripting)
	 - It is a program whose instructions are actually a logically sequenced series of operating system commands, handled one at a time by a command interpreter . In turn, the command interpreter requests services from the operating system.
 - Object oriented
	 - OOP is based on the sending of  messages to objects. Objects respond to messages by performing operations, generally called methods. OO conditionals and loops become messages themselves, whose arguments are often blocks of executable code. 

**Implementation Methods of programming paradigms**
 - Interpreted programming: An interpreted language is a type of programming language for which most of its implementations execute instructions directly and freely, without previously compiling a program into machine-language instructions.
 - Compiled programming: Compiled languages are converted directly into machine code that the processor can execute. As a result, they tend to be faster and more efficient to execute than interpreted languages. They also give the developer more control over hardware aspects, like memory management and CPU usage.

smthg abouth programing languages and secuential alorithms. All of the programming paradigms above would be nothing withouth th eprogramming languages used to code them, each one with different characteristics and functions. They have specifics uses depending the job and they are either compiled or interpreted. Source cod is used to program them. These are some examples:

    **JavaScript** : developed by Brendan Eich
    **Haskwell** : developed by Lennart Augustsson, Dave Barton
    **Scala** : developed by Martin Odersky
    **Erlang** : developed by Joe Armstrong, Robert Virding
    **Lisp** : developed by John Mccarthy
    **ML** : developed by Robin Milner
    **Clojure** : developed by Rich Hickey

> **Source code: list of human-readable instructions that a programmer writes—often in a word processing program—when he is developing a program.**

**Data representatoin in structured programming language:**

 - **Identifiers:** Unique name given to variable (function and objects as well) is identifier.
 - **Variables**:data item whose value **can change** during the program’s execution. Thus, as its name implies – the value **can vary.**
 - **Constants:** is a data item whose value **cannot change** during the program’s execution. Thus, as its name implies – the value is **constant.**
 - **Reserved Words**:is a **word** that cannot be used as an identifier, such as the name of a variable, function, or label – it is "**reserved** from use".
 - **Types of data:** primitives and composites (extended). 
	 - Memory space for each data type: Total space of the data, it could be bits or bytes
	 - Range of values of each data type: The limitations the value itself has.
	
	Each language is different, this is an example for sql:
	 
| Data type | Range |
|--|--|
|char (character) | A string of 1 to maximum configured row size, but not exceeding 16,000 characters (32,000 bytes) |  |
| varchar (character)| A string of 1 to maximum configured row size, but not exceeding 16,000 characters (32,000 bytes) | |  |
| nchar (unicode)|See char data type.  |
| nvarchar (unicode) | See varchar data type. |
| tinyint (1-byte integer)| -128 to +127 |
| smallint (2-byte integer)|  -32,768 to +32,767|
| integer (4-byte integer) | -2,147,483,648 to +2,147,483,647 |
| bigint (8-byte integer)| -9,223,372,036,854,775,808 to +9,223,372,036,854,775,807 |
| decimal (fixed-point exact numeric) | Depends on precision and scale. Default is (5,0): -99999 to +99999. Maximum number of digits is 38. |
| float4 (4-byte floating)| ‑3.402823e+38 to +3.402823+38 (7 digit precision) |
| float, float8 (8-byte floating)| -1.0e+308 to 1.0e+308 (15 digit precision) |
| ansidate (4-byte integer)| 0001-01-01 to 9999-12-31 |
| time (2- or 4-byte integer) | 00:00:00 to 23:59:59.999999 |
| timestamp (8-byte integer)| 0001-01-01 00:00:00 to9999-12-31 23:59:59.999999999  
| interval year to month (4-byte integer)| -9999-11 to 9999-11
| interval day to second (8-byte integer)| -3652047 23:59:59.999999 to 3652047 23:59:59.999999  
 | money (8 bytes) |$-999,999,999,999.99 to $999,999,999,999.99
| ipv4 (4-byte binary)| 0.0.0.0 to 255.255.255.255 |
| ipv6 (16-byte binary) | :: to ffff:ffff:ffff:ffff:ffff:ffff:ffff:ffff |
|uuid (128-bit integer) | 00000000-0000-0000-0000-000000000000 to FFFFFFFF-FFFF-FFFF-FFFF-FFFFFFFFFFFF |
| boolean (1-byte binary) | 0 or 1
 |

>  - **Data type conversion:When data from one object is moved to, compared with, or combined with data from another object, the data may
> have to be converted from the data type of one object to the data type
> of the other.**

 
 **Operators of structured programming language:**
 - Relationship
	 - <
	 - <=
	 - *>*
	 - *>=*
	 - ==
	 - !=
 - Logical
	 - && (and)
	 - || (or)
	 - ! (not)
 - Conditional
	 - ?
 
 
**Basic functions of input-output (I/O) in structured programming language.**
	**Input** means to provide the program with some data to be used in the program and **Output** means to display data on screen or write the data to a printer or a file.
 illustrative examples:
 scanf()
 printf()
 getchar()
 putchar()
 gets()
 puts()

Refrences:
[Programming paradigms](https://cs.lmu.edu/~ray/notes/paradigms/)
[Geeksforgeeks](https://www.geeksforgeeks.org/introduction-of-programming-paradigms/)
[Codeburst](https://codeburst.io/declarative-vs-imperative-programming-a8a7c93d9ad2)
[Actian](https://docs.actian.com/vector/5.0/index.html#page/SQLLang/Storage_Formats_of_Data_Types.htm)
[The java tutorial](https://www.iitk.ac.in/esc101/05Aug/tutorial/java/nutsandbolts/relational.html)
[Rebbus comunity](https://press.rebus.community/programmingfundamentals/chapter/logical-operators/)
[ThoughtCo](https://www.thoughtco.com/conditional-operator-2034056)
[StudyTonight](https://www.studytonight.com/c/c-input-output-function.php)
