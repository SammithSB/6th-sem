#!/bin/bash

flex lexer.l
bison -dy -Wno parser.y
gcc -g y.tab.c lex.yy.c -ll

./a.out<sample_input1.c>output1.txt
