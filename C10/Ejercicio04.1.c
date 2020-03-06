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
        printf("Orden contrario\n");
        for (int j = size-1; j > -1; j--)
        {
            printf("%d\n",array_A[j]);
        }

    }
    else
    {
        printf("No se puede continuar");
        return 1;
    }
    return 0;
}