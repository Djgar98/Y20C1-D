#include <stdio.h>

void ordenar_por_insercion(int array[], int n);
void imprimir(int array[], int n);

int main(void)
{
    int arr[] = {12, 11, 13, 5, 6};

    printf("Datos no ordenados:\n");
    imprimir(arr, 5);
    ordenar_por_insercion(arr, 5);
    printf("\nDatos ordenados de forma ascendente:\n");
    imprimir(arr, 5);

    return 0;
}

void ordenar_por_insercion(int array[], int n)
{
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = array[i];
        j = i - 1;

        /* Mueve los elementos del arreglo[1..i-1], que son
          mayores que la variable llave, a una posicion antes
          de la que poseen */

        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}

void imprimir(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}