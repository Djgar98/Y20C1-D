#include <stdio.h>

int main(void)
{
    int numeros[100];

    //Recorremos las 100 posiciones del arreglo
    for(int i = 0; i < 100; i++)
    {
        //Almacenamos el valor de i + 1
        //Por que inicia en 0
        numeros[i] = i + 1;

        //E imprimimos
        printf("%i ", numeros[i]);
    }

    return 0;
}