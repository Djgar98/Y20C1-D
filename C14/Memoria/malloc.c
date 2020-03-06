/*
    Ejemplo básico de uso de malloc

    Elaborado por: Axel Eleazar García Darce
    Fecha de Creación: 7/08/2019 - 3:42pm

*/

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // declaro mi puntero
    int *puntero_entero;

    puntero_entero = malloc(sizeof(int));

    if (puntero_entero != NULL)
    {
        * puntero_entero = 12;
        printf("Dirección de la memoria: %p\n", puntero_entero);
        printf("Contenido de la memoria: %d\n", * puntero_entero);
        free(puntero_entero);
    }
    else
    {
        printf("No se pudo reservar memoria :(");
    }


    return 0;
}