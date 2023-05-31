//Programa para categorizar un simple caracter que es entero en la terminal

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char c;

    printf("Ingresa un simple caracter:\n");
    scanf("%c", &c);
    if( (c>= 'a' && c<= 'z') || (c>= 'A' && c<= 'Z'))
    printf("Es un caracter alfabetico.\n");
    else if (c>= '0' && c<= '9')
    printf("Es un digito.\n");
    else
    printf("Es un caracter especial.\n");
    return 0;
}
