a.out: y.tab.c lex.yy.c
	gcc y.tab.c lex.yy.c
lex.yy.c: lex.l
	lex lex.l
y.tab.c: parser.y
	yacc -d parser.y