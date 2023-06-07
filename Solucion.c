#include <stdio.h>
#include <math.h>

float calcular_x1(float a,float b,float c);
float calcular_x2(float a,float b,float c);
int main(int argc, char const *argv[])
{
    float a,b,c;
    printf("Ingresa el valor de a ");
    scanf("%f",&a);
    printf("Ingresa el valor de b ");
    scanf("%f",&b);
    printf("Ingresa el valor de c ");
    scanf("%f",&c);

    float r = sqrt(pow(b,2)-4*a*c);
    if(r>0 || r==0){

        float x1 = calcular_x1(a,b,c);
        printf("\nX1 ES : %f",x1);
        float x2 = calcular_x2(a,b,c);
        printf("\nX2 ES : %f",x2);
        
    }else{

        printf("No existen raices reales \n");
    }
    return 0;
}
float calcular_x1(float a,float b,float c){

    float x1= (-b-sqrt(pow(b,2)-4*a*c))/2*a;
    
    return x1;
}

float calcular_x2(float a,float b, float c){

    float x2=(-b+sqrt(pow(b,2)-4*a*c))/2*a;

    return x2;
}

