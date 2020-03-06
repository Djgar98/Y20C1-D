#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int arreglo[3];
    int suma = 0;
    int resta = 0;
    int multiplicacion = 1;
    float division = 0;

    //Solicitamos 3 valores
    //Los almacenamos en un arreglo
    //Y almacenamos el valor de sus operaciones aritméticas
    for(int i = 0; i < 3; i++)
    {
        arreglo[i] = get_int("Ingrese el valor en la posición[%i] del arreglo: ", i);

        suma += arreglo[i];
        multiplicacion *= arreglo[i];

        if(i == 0)
        {
            resta = arreglo[i];
            division = arreglo[i];
        }
        else
        {
            resta -= arreglo[i];
            division /= arreglo[i];
        }
    }

    //Mostramos un mensaje
    printf("Arreglo A = ");

    //E imprimimos los valores almacenados en el arreglo
    for(int i = 0; i < 3; i++)
    {
        printf("%i,", arreglo[i]);
    }
    printf("\n");

    //Mostramos el resultado de las operaciones aritméticas
    printf("Suma: %i \n", suma);
    printf("Resta: %i\n", resta);
    printf("Multiplicación: %i\n", multiplicacion);
    printf("División: %.2f\n", division);

    return 0;
}