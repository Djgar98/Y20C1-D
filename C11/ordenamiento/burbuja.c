#include <stdio.h>

void imprimir(float array[], int n);
void ordenar_por_burbuja(float array[], int n) ;

int main(void)
{
    float arr[10] = {25.5, 34.1, 27.6, 15.24, 3.27, 5.14, 6.21, 7.57, 4.61, 5.41};

    printf("Datos no ordenados:\n");
    imprimir(arr, 10);
    ordenar_por_burbuja(arr, 10);
    printf("\nDatos ordenados de forma ascendente:\n");
    imprimir(arr, 10);

    return 0;
}

// Imprime los elementos de un arreglo de floats de uno en uno
void imprimir(float array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%.2f ", array[i]);
    }
    printf("\n");
}

// Ordenamiento por burbuja
void ordenar_por_burbuja(float array[], int n)
{
    float aux;
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (array[j] > array[j + 1])
            {
                aux = array[j];
                array[j] = array[j + 1];
                array[j + 1] = aux;
            }
        }
    }
}