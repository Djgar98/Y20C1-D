/*
    Ejemplo básico de uso de malloc

    Elaborado por: Axel Eleazar García Darce
    Fecha de Creación: 7/08/2019 - 8:42pm

*/

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // declaro mi puntero
    int *puntero_arreglo;
    int arreglo[4] = { 60, 80, 80, 100};
    puntero_arreglo = calloc(4, sizeof(int));


    if (puntero_arreglo != NULL)
    {
        puntero_arreglo = arreglo;
        for (int i = 0; i < 4; i++)
        {
            printf("Dirección %p, valor: %d\n", (puntero_arreglo + i), * (puntero_arreglo + i));
        }
    }
    else
    {
        printf("No se pudo reservar memoria :(\n");
    }


    return 0;
}