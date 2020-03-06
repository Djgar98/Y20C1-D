#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // declaro mi puntero
    int *puntero_arreglo;
    int arreglo[4] = { 60, 80, 80, 100};
    puntero_arreglo = calloc(4, sizeof(int));

    if (puntero_arreglo != NULL)
    {
        for (int i = 0; i < 4; i++)
        {
            printf("Dirección %p, valor: %d\n", arreglo[i], arreglo[i]);
        }

        for (int i = 0; i < 4; i++)
        {
            puntero_arreglo[i] = arreglo[i] + 1;
            printf("Dirección %p, valor: %d\n", puntero_arreglo + i, *(puntero_arreglo + i));
        }
        free(puntero_arreglo);
    }
    else
    {
        printf("No se pudo reservar memoria :(\n");
    }


    return 0;
}
