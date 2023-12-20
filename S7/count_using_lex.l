%{
#include<stdio.h>
int cc=0, sc=0, tc=0, lc=0, wc=0;
%}


%%
[ ] {sc++; cc+=yyleng;}
[\t] {tc++; cc+=yyleng;}
[\n] {lc++; cc+=yyleng;}
[^\t\n ]+ {wc++; cc+=yyleng;}
%%

int main()
{
    printf("\n\n --- COUNT CHARACTERS, SPACES, TABS, LINES, WORDS ---\n");
    printf("\nEnter the input below :-\n");
    yylex();
    printf("\n -> OUTPUT");
    printf("\nNumber of characters: %d", cc);
    printf("\nNumber of spaces: %d", sc);
    printf("\nNumber of tabs: %d", tc);
    printf("\nNumber of lines: %d", lc);
    printf("\nNumber of words: %d", wc);
    printf("\n");
    return 0;
}

int yywrap( )
{
    return 1;
}
