/* contar el numero de vocales, consonantes, digitos, espacios en blanco y otros caracteres en una linea de texto */

#include <stdio.h>
#include <ctype.h>
/* prototipo de la funcion */
void analiza_linea (char linea[], int *pv, int *pc, int *pd, int *pb, int *po);
int main()
{
    char linea[80];             /* linea de texto */
    int vocales = 0;            /* contador de vocales */
    int consonantes = 0;        /* contador de consonantes */
    int digitos = 0;            /* contador de digitos */
    int blancos = 0;            /* contador de espacios en blanco */
    int otros = 0;              /* contador de resto de caracteres */

    printf("Introducir una linea de texto: \n");
    scanf("%[^\n]", linea);

    analiza_linea (linea, &vocales, &consonantes, &digitos, &blancos, &otros);
    printf("\nN° de vocales: %d", vocales);
    printf("\nN° de consonantes: %d", consonantes);
    printf("\nN° de digitos: %d", digitos);
    printf("\nN° de caracteres en blanco: %d", blancos);
    printf("\nN° de otros caracteres: %d", otros);
}
void analiza_linea (char linea[], int *pv, int *pc, int *pd, int *pb, int *po)
/* analizar los caracteres en una linea de texto */
{
    char c;                /* caracter en mayusculas */
    int cont = 0;          /* contador de caracteres */
    while ((c = toupper(linea[cont]))    !=  '\0') {
        if(c == 'A' ||  c == 'E'  ||  c == 'I'  || c == 'O'  ||  c == 'U')
            ++ *pv;                        /* vocal */
        else if  (c >= 'A'  && c <= 'Z')
                ++ *pc;                    /* consonante */
            else if (c >= '0'  && c <= '9')
                    ++ *pd;                /* digito */
                else if( c == ' '  || c == '\t')
                        ++ *pb;            /* espacio en blanco */
                    else 
                        ++ * po;           /* otros */
        ++ cont;
    }
    return;
}