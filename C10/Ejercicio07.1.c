#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int size = get_int("Ingrese la longitud del arreglo: ");
    if (size > 0)
    {
        int array_A[size];
        for (int i = 0; i < size; i++)
        {
            array_A[i] = get_int("Elemento %d: ",(i+1));
        }
        int Num_mayor = array_A[0];
        int Num_menor = array_A[0];
        for (int j = 1; j < size; j++)
        {
            if (Num_mayor < array_A[j] )
            {
                Num_mayor = array_A[j];
            }

        }
        for (int x = 1; x < size; x++)
        {
            if (Num_menor > array_A[x] )
            {
                Num_menor = array_A[x];
            }

        }
        printf("El numero mayor es %d\n", Num_mayor);
        printf("El numero menor es %d\n", Num_menor);
    }
    else
    {
        printf("No se puede continuar");
        return 1;
    }
    return 0;
}