#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int size = get_int("Ingrese la longitud del arreglo: ");
    if (size > 0)
    {
        int array_A[size];
        int array_B[size];
        for (int i = 0; i < size; i++)
        {
            array_A[i] = get_int("Ingrese el %d valor ",(i+1));
            array_B[i] = array_A[i];
        }
        printf("Arreglo A\t Arreglo B\n");
        for (int j = 0; j < size; j++)
        {
            printf("%d\t\t %d\n",array_A[j], array_B[j]);
        }

    }
    else
    {
        printf("No se puede continuar");
        return 1;
    }
    return 0;
}