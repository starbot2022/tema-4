#include<stdio.h>
#include <math.h>

int segundo(float a, float b, float c) /*funcion */
{

    float x1 = ((-b + sqrt(b * b) - (-4 * a * c))) / (2 * a); /* si el caso de ser b positivo*/
    float x2 = ((-b - sqrt(b * b) - (-4 * a * c))) / (2 * a);/*enn el caso de ser b negativo*/

    return segundo;
}

int main()
{

    float a;
    float b;
    float c;

    printf("programa para calcular una funcion de segundo grado ");

    printf("introduce el valor de a: ");
    scanf("%f", &a);

    printf("introduce el valor de b: ");
    scanf("%f", &b);

    printf("introduce el valor de c: ");
    scanf("%f",c);

    printf("el resultado es: %fl y %fl", segundo(a, b, c));

    return 0;
}