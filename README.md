# CS251 : Implemented the Symbol Table and ICG

# Authors : Aryan(12240280) and Darsh(12240500)


## Points to be noted before running the compiler

 **__ This compiler is case `sensitive`, all keywords must be written in lowercase __**

1. **Unary increment and decrement** can be done in updation part of for loop only.

2. **Function definition** can not handle default parameters, currently it is only able to define Identifiers as parameters.



## Structure of the folder 'Compiler'


This folder contains the php compiler.
We have used lex (for tokenization) and yacc (for syntax analyzer) for creating this compiler for PHP.

we have provided you with :

1. php.l (The lex file)
2. lex.yy.c (compiled lex file)
3. a.out (compiled file for lex.yy.c and y.tab.c)
4. php.y (The Yacc file)
5. y.tab.c and y.tab.h (Compiled yacc program)
6. references.txt (References for this assignment)

## How to execute this program

When you run `./a.out < source.php`, it will take input from the file `source.php` and print the Intermediate code and symbol table result accordingly.
If you want any change, just do it in the source.php file and you don't have to do anything with the yacc and lex file at all.


## For Intermediate Code Generation and Symbol Table implementation
1. This implements intermediate code generation only for the parts which were given in the assignment sheet.
2. For implementing the code generation part and symbol table I have used several resources which were provided during the course.


**Note that tokens are in capital letters only**
