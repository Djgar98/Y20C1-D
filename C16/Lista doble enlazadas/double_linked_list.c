#include<stdio.h>
#include<stdlib.h>

#include "dll.h"

int main()
{
    // Insertar e imprimir la lista tanto hacia adelante como en reversa
    insertar_en_cola(2);

    imprimir();
    imprimir_en_reversa(cabeza);
    printf("\n");

    insertar_en_cola(4);

    imprimir();
    imprimir_en_reversa(cabeza);
    printf("\n");

    insertar_en_cabeza(6);

    imprimir();
    imprimir_en_reversa(cabeza);
    printf("\n");

    insertar_en_cola(8);

    imprimir();
    imprimir_en_reversa(cabeza);
    printf("\n");
}