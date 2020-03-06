#include <stdio.h>

int main(void)
{
    int arregloOriginal[5] = {4, 5, 6, 1, 3};
    int arregloCopia[5];

    //Recorremos el arreglo original
    for(int i = 0; i < 5; i++)
    {
        arregloCopia[i] = arregloOriginal[i];
    }

    //Mostramos un mensaje
    printf("Arreglo original = ");

    //Recorremos el arreglo original
    for(int i = 0; i < 5; i++)
    {
        //E imprimimos el valor en la posición del índice i del arreglo original
        printf("%i,", arregloOriginal[i]);
    }
    printf("\n");

    //Nuevamente mostramos un mensaje
    printf("Arreglo copia = ");

    //Recorremos el arreglo copia
    for(int i = 0; i < 5; i++)
    {
        //E imprimimos el valor en la posición del índice i del arreglo copia
        printf("%i,", arregloCopia[i]);
    }
    printf("\n");

    return 0;
}