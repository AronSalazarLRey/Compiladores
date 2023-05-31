/**LA DEFINICON DE VARIABLE
    DE ESTA SECCION ES "WHICH"**/
%{
    int count = 0;
%}

/**ESTA SECCION TIENE 3 REGLAS
1) MATCH CON LETRAS
2) MATCH CON CUALQUIER OTRO CARACTER EXCEPTO "NEWLINE"
3) NO HACE INPUT DESPUES DEL ENTER**/

%%
[A-Z] {printf("%s capital letter\n",yytext);
count++;}
.   {printf ("%s not a capital letter\n",yytext);}
\n  {return 0;}
%%

/** IMPRIME LOS NUMEROS DE LA LETRA 
PRESENTES EN EL "GIVEN IMPUT"**/

int yywrap(){}
int main(){

yylex();
printf("\nNumber of capital letters\n"
"in the given input:%d\n", count);
return 0;
}