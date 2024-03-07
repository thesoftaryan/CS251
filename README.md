# CS251

# Authors : Aryan(12240280) and Darsh(12240500)


## Points to be noted before running the compiler

 **__ This compiler is case `sensitive`, all keywords must be written in lowercase __**

1. **Unary increment and decrement** can be done in updation part of for loop only.

2. **Break and continue** statements can not be written inside any other statements like conditionals. They have to be written in the same level as other statement in a loop.

3. **Return statement** can only be written at last line of a function definition.

4. **Function definition** can not handle default parameters, currently it is only able to define Identifiers as parameters.

5. **Function invocation** can not contain any const values, we can pass only identifiers as values.



## Structure of the folder 'Compiler'


This folder contains the php compiler.
We have used lex (for tokenization) and yacc (for syntax analyzer) for creating this compiler for PHP.

we have provided you with :

1. The lex file (php.l)
2. compiled lex file (lex.yy.c)
3. a.out compiled file for lex.yy.c)
4. The Yacc file (php.y)
5. Compiled yacc program (y.tab.c and y.tab.h)
6. references.txt (References for this assignment)

When you run `./a.out <filename>`, it will take input from the file you provided with './a.out' and print the result accordingly.


**Note that tokens are in capital letters only**
