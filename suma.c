
/*1) Escribir una función que sume dos números. Implemente un programa
que la utilice*/
#include <stdio.h>

int addition(int a, int b) /*funcion donde se guardara los valores para sumarlos*/
{

    int result = a + b; /*variables a sumar */

    return result; /*se retornara el ressultado de la suma de lass dos variables**/
}

int main()
{
    int num;  /*declaramos el tipo de dato*/
    int num2; /*declaramos el tipo de dato*/

    printf("introduzca un numero: "); /*mostramos en pantalla */
    scanf("%d", &num);                /*se guardara la informacion en la  variablle num*/

    printf("introduzca un numero: "); /*mostramos en pantalla */
    scanf("%d", &num2);               /*se guardara la informacion en la  variablle num2*/

    printf("la suma de sus dos numeros son: %d", addition(num, num2)); /*se muestra al usuario el siguiente mensaje

                                                                       con el resultado y se llama a la fuuncion */

    return 0; /*retornamos 0*/
}
