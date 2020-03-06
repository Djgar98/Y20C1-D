#include <stdio.h>

void ordenar_por_seleccion(int array[], int n);
void imprimir(int array[], int n);

int main(void)
{
    int arr[4] = {10, 5, 2, 15};

    printf("Datos no ordenados:\n");
    imprimir(arr, 4);
    ordenar_por_seleccion(arr, 4);
    printf("\nDatos ordenados de forma ascendente:\n");
    imprimir(arr, 4);

    return 0;
}

void ordenar_por_seleccion(int array[], int n)
{
    int position, swap;

    for (int i = 0; i < n - 1; i++)
    {
        position = i;

        for (int j = i + 1; j < n; j++)
        {
            if (array[position] > array[j])
            {
                position = j;
            }
        }
        if (position != i)
        {
            swap = array[i];
            array[i] = array[position];
            array[position] = swap;
        }
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