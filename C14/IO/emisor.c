#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int arreglo[] = {5, 2, 3, 12, 34, 45};

    // Se envía primero la cantidad de elementos por emitir
    printf("%d\n", arreglo[0]);

    // Se envían los elementos del arreglo
    for (int i = 1; i < 6; i++)
    {
        printf("%d\n", arreglo[i]);
    }

    return 0;
}