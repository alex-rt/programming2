## Subprograms

> Divide and conquer has been one of the important software design
> strategy, and subprograms are just outcome of that.

• Subprograms are fundamental **building blocks of programs** and important concept in programming.

•Subprograms have **input and output**. Inputs is usually through parameters to the subprogram while output could be through parameters or as a return.

• Conventionally, there are two categories of subprograms- **procedures and functions.**

• Subprograms having return are called functions; and others are called **procedures.** C/C++/Java have only **functions**.

•**Subprogram Definition**: Describes interface and the actions of the subprogram.

• **Subprogram call** is the explicit request that the called subprogram is executed.

• **Subprogram header**: Which is first part of definition, defines its name, Input (parameters), and outputs and their types.

• **Subprogram Interface**: Also called signature of subprogram, includes name of subprogram, list of parameters with their type, and output(s) and their types. For example prototypes in C/C++.

This is a code example of a subprogram:

    #include <iostream> 
    
    using namespace std;
    double avg(double, double);
    
    int main()
    {
	    float a, b, c;
	    cin>>a>>b;
	    c = avg(a,b);
	    count<< c;
	    
	    return =;
    }
    double avg(double x, double y)
    {
	    double a;
	    a = (x+y)/2;
	    return a;
    }

On a subprogram that uses parameters **by value**, the function receives a single copy of a variables value, *it cannot modify it.*
On the other hand, with a subprogram that exchanges parameters **by refrence** , memory address of variables is stored and then passed through the function, so it can not only know the value but also *it can be modified.*  Its kind of like a pointer but for functions.





## Recursion
Recursion is a powerful technique for simplifying the design of algorithms. Basically, _recursion_ **means self-reference.** In a recursive mathematical sequence, each term is derived by **applying a formula** to preceding terms. The Fibonacci sequence (1, 1, 2, 3, 5, 8, 13, 21, ...), which was first used to model the growth of a rabbit colony, is an example. Each term in the sequence (after the second) is the sum of the two terms that immediately precede it.

In a **recursive definition**, something is defined in terms of simpler versions of itself. Consider the definition of  _n_  factorial (_n!_), the product of all integers from 1 to  _n_:

n! = n * (n - 1)!

### **Recursive Subprograms**

A recursive subprogram is **one that calls itself**. Think of a recursive call as a call to some other subprogram that does the same task as your subprogram. Each **recursive call** creates a new instance of any objects declared in the subprogram, including parameters, variables, cursors, and exceptions. 

 - **Direct recursion:**  It happens when a function calls itself. 
 - **Indirect recursion:** Occurs when a function is called not by itself but by another function that it called (either directly or indirectly). 


For example, if _f_ calls _f,_ that is direct recursion, but if _f_ calls _g_ which calls _f,_ then that is indirect recursion of _f._
#### Example

To solve some programming problems, you must repeat a sequence of statements until a condition is met. You can use iteration or recursion to solve such problems. Recursion is appropriate when the problem can be broken down into simpler versions of itself. For example, you can evaluate 3! as follows:

    0! = 1
    1! = 1 * 0! = 1 * 1 = 1
    2! = 2 * 1! = 2 * 1 = 2
    3! = 3 * 2! = 3 * 2 = 6

To implement this algorithm, you might write the following recursive function, which returns the factorial of a positive integer:

    FUNCTION fac (n POSITIVE) RETURN INTEGER IS  -- returns n!
    BEGIN
       IF n = 1 THEN  -- terminating condition
          RETURN 1;
       ELSE
          RETURN n * fac(n - 1);  -- recursive call
       END IF;
    END fac;

At each recursive call,  _n_  is decremented. Eventually,  _n_  becomes 1 and the recursion stops.

