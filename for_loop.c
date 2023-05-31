//Programa que genera una tabla de números triangulares

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, triangularNumber;
    printf("Tabla de numeros traingulares\n\n");
    printf("n   Suma de 1 a n\n");
    printf("----------------------------\n");
    triangularNumber = 0;
    for(n = 1; n <=10; ++n) {
        triangularNumber += n;
        printf(" %2i             %i\n", n, triangularNumber);
    }
    
    return 0;
}
