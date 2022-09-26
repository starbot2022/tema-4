
/*. Escribir una función que calcule y presente las raíces reales de la
ecuación de segundo grado*/

#include <stdio.h>
#include <math.h>

int primero(float a, float b, float c)
{

    float x1 = ((-b + sqrt(b * b) - (-4 * a * c))) / (2 * a);
   
    return x1;
}
int segundo(float a, float b, float c){
	
	 float x2 = ((-b - sqrt(b * b) - (-4 * a * c))) / (2 * a);
	 
	 return x2;
	
	
	
}
int main()
{

    float a;
    float b;
    float c;

    printf("programa para calcular una funcion de segundo grado");

    printf("introduce el valor de a: ");
    scanf("%f", &a);

    printf("introduce el valor de b: ");
    scanf("%f", &b);

   printf("introduce el valor de c:");
   scanf("%f",&c);

    printf("el resultado es: %fl", primero(a, b, c));
    
    printf("el resultado es: %fl ", segundo(a, b, c));

    return 0;
}
