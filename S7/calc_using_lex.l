%{
#include<stdio.h>
#include<stdlib.h>
int i, j, op=0;
float a, b;
int calculate();
%}


dig [0-9]+|([0-9]*)\.([0-9]+)
add "+"
sub "-"
mul "*"
div "/"
pow "^"


%%

{dig} {calculate();}
{add} {op=1;}
{sub} {op=2;}
{mul} {op=3;}
{div} {op=4;}
{pow} {op=5;}
[\n] {return 0;}

%%

int calculate()
{
    if(op == 0)
    {
        a=atof(yytext);
        return 0;
    }

    b=atof(yytext);
    switch(op)
    {
        case 1:
                a=a+b;
                break;
        case 2:
                a=a-b;
                break;
        case 3:
                a=a*b;
                break;
        case 4:
                if(b==0)
                {
                    printf("\n Error, division by Zero!\n Aborting... \n");
                    exit(1);
                }
                a=a/b;
                break;
        case 5:
                if(b==0)
                    a=1;
                j=a;
                for(i=1; i<b; i++)
                    a=a*j;
                break;
    }
    op=0;
    return 0;
}

int main()
{
    printf("\n\n\t --- CALCULATOR USING LEX ---\n");
    printf("\nEnter the input here: ");
    yylex();
    printf("\n ->OUTPUT");
    printf("\nAnswer: %f\n", a);
    return 0;
}

int yywrap()
{
    return 1;
}