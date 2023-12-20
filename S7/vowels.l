%{
int vc=0, cc=0;
%}

%%
[aeiouAEIOU] {vc++;}
[a-zA-z] {cc++;}
[\n] {return 0;}
%%

int main()
{
    printf("\n\n\t --- COUNT VOWELS, CONSONANTS ---\n");
    printf("\nEnter the string: ");
    yylex();
    printf("\n\n -> OUTPUT");
    printf("\nNumber of vowels: %d", vc);
    printf("\nNumber of consonants: %d", cc);
    printf("\n");
    return 0;
}

int yywrap()
{
    return 1;
}