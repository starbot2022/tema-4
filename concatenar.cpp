#include<stdio.h>
#include<string.h>

/*funcion principal*/

int  main()
{
char a[200];/* primera cadena que introducira el usuario*/	
char b[200];/*segunda cadena que introducira el usuario*/
char result[400]; /*resultado*/



printf("introduzca primera cadena :");
gest(a);

printf("intrtoduzca segunda cadena :");
gest(b);

cambio (result,a);
cambio(result,b);

printf("el resultado es : %s\n", result);
printf("longitud : %d\n",cambio(result));

}