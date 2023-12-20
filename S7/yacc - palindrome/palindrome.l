%{
#include<stdio.h>
#include"y.tab.h"
%}


%%
[a-zA-Z0-9]+ {yylval.f = yytext; return STR;}
[\n] {return 0;}
. ;
%%


int yywrap()
{
    return 1;
}