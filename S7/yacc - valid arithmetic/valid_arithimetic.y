%{
#include<stdio.h>
int yylex();
void yyerror(char *s);
%}

%token NUMBER
%token VARIABLE

%left '+' '-'
%left '*' '/' '%'
%left '(' ')'


%%

S: VARIABLE '=' E{
    printf("\n-> Entered arithmetic expression is valid\n\n");
}

E: E '+' E
 | E '-' E
 | E '*' E
 | E '/' E
 | E '%' E
 | '(' E ')'
 | NUMBER
 | VARIABLE
;

%%

int main()
{
    printf("\n\n\t --- CHECK ARITHMETIC EXPRESSION VALIDITY ---\n");
    printf("\nEnter the expression here: ");
    yyparse();
    return 0;
}

void yyerror(char *s)
{
    printf("\n-> Entered arithmetic expresion is Invalid\n\n");
}