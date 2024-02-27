%{
#include <stdio.h>
%}

%%
"/*"    { while (input() != '*' || input() != '/') {} }   // Match and ignore comments
.       { putchar(yytext[0]); }                             // Print other characters

%%

int main() {
    yylex();
    return 0;
}
