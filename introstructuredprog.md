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

 - Identifiers 
 - Variables 
 - Constants 
 - Reserved Words
 - Types of data: primitives and composites (extended). 
	 - Memory space for each data type. 
	 - Range of values of each data type.
 - Data type conversion
 
 **Operators of structured programming language:**
 - Conditional
 - Logical
 - Relationship
 
**Basic functions of input-output (I/O) in structured programming language.**
	
