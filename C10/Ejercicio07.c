#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Solicitar el tamaño del arreglo
    int n = get_int("Ingrese la cantidad de elementos a registrar: ");
    int array[n], max, min;
    printf("****** Ingrese los datos ******\n");
    // Rellenar el arreglo
    for (int i = 0 ; i < n ; i++)
    {
        array[i] = get_int("Ingrese el elemento #%d: ", i + 1);
    }
    // Setear datos de inicio para la comparación
    max =  array[0];
    min = array[0];
    // Empezar a hacer las comparaciones de mayor y menor
    for (int j = 0 ; j < n ; j++)
    {
        if (array[j] > max)
        {
            max = array[j];
        }
        if (array[j] < min)
        {
            min = array[j];
        }
    }
    // Imprimir los resultados
    printf("El mayor elemento es: %d.\n", max);
    printf("El menor elemento es: %d.\n", min);
    // Decir que todo esta oquey
    return 0;
}