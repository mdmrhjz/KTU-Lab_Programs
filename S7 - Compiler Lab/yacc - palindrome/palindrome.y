%{
#include<stdio.h>
#include<string.h>
int i, flag=0;
int yylex();
void yyerror(char *s);
%}


%union
{
    char *f;
}

%token <f> STR
%type <f> E


%%
S: E
{
    for(i=0; i<strlen($1)/2; i++)
    {
        if($1[i] != $1[strlen($1)-1-i])
        {
            flag=1;
            break;
        }
    }

    printf("\n\n-> OUTPUT");
    if(flag == 1)
    {
        printf("\nNot a Palindrome\n");
    }
    else
    {
        printf("\nIts a Palindrome\n");
    }
}
;

E: STR
{
    $$ = $1;
}
;
%%


int main()
{
    printf("\n\n\t --- CHECK PALINDROME ---\n");
    printf("\nEnter the input here: ");
    yyparse();
    return 1;
}

void yyerror(char *s)
{
    printf("\n Syntax Error!\n Aborting...\n\n");
}