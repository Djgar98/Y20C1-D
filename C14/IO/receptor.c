#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // La primer entrada, ya sea por piping o por redireccionamiento, siempre será la cantidad
    // de elementos a recibir
    int n = get_int("");
    int arreglo[n];

    // Las siguientes entradas serán los elementos a imprimir
    for (int i = 0; i < n; i++)
    {
        arreglo[i] = get_int("");
    }

    printf("===============================\n");
    printf("Cantidad de elementos: %d \n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Elemento %d: %d\n", i + 1, arreglo[i]);
    }

    return 0;
}