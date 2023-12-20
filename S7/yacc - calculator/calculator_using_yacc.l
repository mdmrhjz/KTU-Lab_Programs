%{
#include "y.tab.h"
%}

%%
[0-9]+|([0-9]*\.[0-9]+) { yylval.num = atoi(yytext); return NUMBER; }
[-^+*/]     {return yytext[0];}
[\n]        {return 0;}
. ;
%%

int yywrap()
{
    return 1;
}