%{
#include<stdio.h>
#include"y.tab.h"
%}

%%

[a-zA-Z]+ {return VARIABLE;}
[0-9]+ {return NUMBER;}
[\n] {return 0;}
[\t ] //none
. {return yytext[0];}

%%

int yywrap()
{
    return 1;
}