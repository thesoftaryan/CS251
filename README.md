# CS251

# authors : Aryan(12240280) and Darsh(12240500)

This folder contains the tokenization part of php compiler.
We have used lex tool for tokenizing the input which is php file.
we have provided you with :

1. The lex file (php.l)
2. compiled lex file (lex.yy.c)
3. php (compiled file for lex.yy.c)

When you run './php', it will wait for your input to print the recognized
token.

As soon as you enter something, it will see through the given regex and
find a match, if a match found, it will return the token. If in case it 
failed it will return the same input you have provided.

**Note that tokens are in capital letters only**
