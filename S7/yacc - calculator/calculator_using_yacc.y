%{
#include<stdio.h>
#include<stdlib.h>
int yylex();
float result;
void yyerror(char *s);
%}

%union
{
    float num;
}

%token <num> NUMBER
%type <num> expr

%left '+' '-'
%left '*' '/'
right '^'


%%
expr: expr '+' expr { $$ = $1 + $3; result=$$;}
    | expr '-' expr { $$ = $1 - $3; result=$$;}
    | expr '*' expr { $$ = $1 * $3; result=$$;}
    | expr '/' expr {
        if($3 != 0)
        {
            $$ = $1 / $3;
            result=$$;
        }
        else
        {
            printf("\nDivision by zero!\n Aborting...\n\n");
            exit(1);
        }
    }
    | expr '^' expr { $$ = $1 - $3; result=$$;}
    | NUMBER { $$ = $1; result=$$;}
    ;

%%


int main() {
    printf("\n\n\t --- CALCULATOR USING YACC ---\n");
    printf("\nEnter the input: ");
    yyparse();
    printf("\nOutput: %f\n", result);
    return 0;
}

void yyerror(char *s)
{
    printf("\n Syntax Error!\n Aborting...\n\n");
    exit(1);
}