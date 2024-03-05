# CS251

# authors : Aryan(12240280) and Darsh(12240500)

This folder contains the php compiler.
We have used lex (for tokenization) and yacc (for syntax analyzer) for creating this compiler for PHP.

we have provided you with :

1. The lex file (php.l)
2. compiled lex file (lex.yy.c)
3. a.out compiled file for lex.yy.c)
4. The Yacc file (php.y)
5. Compiled yacc program (y.tab.c and y.tab.h)
6. references.txt (References for this assignment)

When you run './a.out', it will wait for your input to print the result.

As soon as you enter something, it will see through the given regex and
find a match, if a match found, it will return the token. If in case it 
failed it will return the same input you have provided.

And from using those tokens it will use Yacc to generate the parse tree and check for the syntax.

**Note that tokens are in capital letters only**
