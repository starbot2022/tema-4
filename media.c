/* 2) Escribir un programa que reciba como argumento un conjunto de
números. Calcular la media mediante una función.*/
#include <stdio.h>

int main()
{

    int i = 0;
    int acum = 0;

    printf("introduzca una serie de numeros: ");

    while (1)
    {

        int temp;

        scanf("%d", &temp);

        if(temp==-1)
        break;

        acum+= temp;
        i++;
    }

    int promedio = acum/i;

    printf("la suma total es de %d");

    return 0;
}

/*int main()
{

    int acum = 0;

    for (int i = 0; i < 10; i++)
    {

        char temp[100];
        puts("introduzca un numero :");
        gets(temp);

        acum += atoi(temp);
    }

    printf("")
}/***/